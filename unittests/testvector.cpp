#include "unittests/testvector.h"
#include "lib/datastructures/vector.h"
#include "lib/datastructures/string.h"
#include "testhelper.h"

#include <assert.h>
#include <string>
#include <vector>
#include <iostream>
#include <typeinfo>   // operator typeid

using namespace std;

void testVectorPushBackStd()
{
    std::vector<std::string> vec;


    vec.push_back("hello");
    vec.push_back("how");
    vec.push_back("are");
    vec.push_back("you");

    assert(vec[0] == "hello");
    assert(vec[1] == "how");
    assert(vec[2] == "are");
    assert(vec[3] == "you");
}

void testVectorPushBackCtci()
{
    ctci::vector<ctci::string> vec;

    vec.push_back("hello");
    vec.push_back("how");
    vec.push_back("are");
    vec.push_back("you");

    assert(vec[0] == "hello");
    assert(vec[1] == "how");
    assert(vec[2] == "are");
    assert(vec[3] == "you");
}


void testGiantVectorPushBackStd()
{
    std::vector<std::string> vec;
    for (int i = 0; i < 1e5; i++)
        vec.push_back("hello");
}

void testGiantVectorPushBackCtci()
{
    ctci::vector<ctci::string> vec;

    for (int i = 0; i < 1e5; i++)
        vec.push_back("hello");
}

void testEraseCtci()
{
    ctci::vector<ctci::string> vec;

    vec.push_back("foo");
    vec.push_back("bar");
    vec.push_back("spam");
    vec.push_back("eggs");
    vec.push_back("bacon");

    assert(*vec.erase(vec.begin() + 2) == "eggs");

    assert(vec.size() == 4);
    assert(vec[0] == "foo");
    assert(vec[1] == "bar");
    assert(vec[2] == "eggs");
    assert(vec[3] == "bacon");
}

void testEraseStd()
{
    std::vector<std::string> vec;

    vec.push_back("foo");
    vec.push_back("bar");
    vec.push_back("spam");
    vec.push_back("eggs");
    vec.push_back("bacon");

    assert(*vec.erase(vec.begin() + 2) == "eggs");

    assert(vec.size() == 4);
    assert(vec[0] == "foo");
    assert(vec[1] == "bar");
    assert(vec[2] == "eggs");
    assert(vec[3] == "bacon");
}

START_TEST(testVector)
TEST(testVectorPushBackStd)
TEST(testVectorPushBackCtci)
TEST(testGiantVectorPushBackStd)
TEST(testGiantVectorPushBackCtci)
TEST(testEraseCtci)
TEST(testEraseStd)
END_TEST

