#include "unittests/testvector.h"
#include "lib/datastructures/vector.h"
#include <assert.h>
#include <string>
#include <map>
#include <iostream>

using namespace std;

void testStringVec()
{
    ctci::vector<string> vec;
    vec.push_back("hello");
    vec.push_back("how");
    vec.push_back("are");
    vec.push_back("you");
    
    assert(vec[0] == "hello");
    assert(vec[1] == "how");
    assert(vec[2] == "are");
    assert(vec[3] == "you");
}

void testMapVec()
{
    map<int, string> m;
    m[0] = "hello";
    m[1] = "how";
    m[2] = "are";
    m[3] = "you";
    
    ctci::vector<map<int, string> > vec;
    vec.push_back(m);
    assert(vec[0][0] == "hello");
    assert(vec[0][1] == "how");
    assert(vec[0][2] == "are");
    assert(vec[0][3] == "you");
}


void testVector()
{
    testStringVec();
    testMapVec();
    cout << "testing Vector passed!" << endl;
}
