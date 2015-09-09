#include "unittests/testvector.h"
#include "lib/datastructures/vector.h"
#include "lib/datastructures/string.h"
#include "testhelper.h"

#include <assert.h>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

template<class T>
void testVectorPushBack()
{
    T vec;
    vec.push_back("hello");
    vec.push_back("how");
    vec.push_back("are");
    vec.push_back("you");
    
    assert(vec[0] == "hello");
    assert(vec[1] == "how");
    assert(vec[2] == "are");
    assert(vec[3] == "you");
}

template<class T>
void testGiantVectorPushBack()
{
    T vec;
    for (int i = 0; i < 1e3; i++)
        vec.push_back("hello");
}

START_TEST(testVector)
TEST(testVectorPushBack<ctci::vector<ctci::string> >)
TEST(testVectorPushBack<std::vector<std::string> >)
TEST(testGiantVectorPushBack<ctci::vector<ctci::string> >)
TEST(testGiantVectorPushBack<std::vector<std::string> >)
END_TEST

