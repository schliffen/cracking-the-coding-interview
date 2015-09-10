#include <assert.h>
#include <iostream>
#include <string>

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


#define COMPARE_WITH_STANDARD_LIBRARY 1

START_TEST(teststring)
TEST(testConstruct<std::string>)
TEST(testAssignment<std::string>)
TEST(testConcat<std::string>)
TEST(testPlusEquals<std::string>)

#if COMPARE_WITH_STANDARD_LIBRARY
TEST(testConstruct<ctci::string>)
TEST(testAssignment<ctci::string>)
TEST(testConcat<ctci::string>)
TEST(testPlusEquals<ctci::string>)
#endif
END_TEST
