#include <assert.h>
#include <iostream>
#include <string>
#include <vector>

#include "lib/datastructures/vector.h"
#include "testhelper.h"
#include "teststring.h"
#include "lib/datastructures/string.h"

template<class T>
void testConstruct()
{
    T str1("foo");
    assert(str1.size() == 3);
}

template<class T>
void testCopy()
{
    T str1("foo");
    T str2(str1);
    assert(str1 == str2);
}

template<class T>
void testAssignment()
{
    T str1("foo");
    assert(str1.size() == 3);
    T str2("bar");
    assert(str2.size() == 3);
    T str3 = str1;
    assert(str3 == "foo");
}

template<class T>
void testConcat()
{
    T str1("foo");
    T str2("bar");
    T str3(str1 + str2);
    assert(str1 == "foo");
    assert(str2 == "bar");
    assert(str1.size() == 3);
    assert(str2.size() == 3);
    assert(str3.size() == 6);
}

template<class T>
void testPlusEquals()
{
    T str1("foo");
    T str2("bar");
    str1 += str2;
    assert(str1 == "foobar");
    assert(str2 == "bar");
    assert(str1.size() == 6);
    assert(str2.size() == 3);
}

template<class V>
V getVec()
{
    V vec;
    vec.push_back("foo");
    vec.push_back("bar");
    vec.push_back("baz");
    return vec;
}

template<class V>
void testStringInVector()
{
    V vec = getVec<V>();
    assert(vec[0] == "foo");
    assert(vec[1] == "bar");
    assert(vec[2] == "baz");
}


#define COMPARE_WITH_STANDARD_LIBRARY 1

START_TEST(teststring)
TEST(testConstruct<std::string>)
TEST(testCopy<std::string>)
TEST(testAssignment<std::string>)
TEST(testConcat<std::string>)
TEST(testPlusEquals<std::string>)
TEST(testStringInVector<std::vector<std::string> >)

#if COMPARE_WITH_STANDARD_LIBRARY
TEST(testConstruct<ctci::string>)
TEST(testCopy<ctci::string>)
TEST(testAssignment<ctci::string>)
TEST(testConcat<ctci::string>)
TEST(testPlusEquals<ctci::string>)
TEST(testStringInVector<ctci::vector<ctci::string> >)
#endif
END_TEST
