#include <assert.h>
#include <iostream>

#include "teststring.h"
#include "lib/datastructures/string.h"

void teststring()
{
    ctci::string str1("foo");
    assert(str1.size() == 3);
    ctci::string str2("bar");
    assert(str2.size() == 3);
    ctci::string str3 = str1 + str2;
    assert(str3.size() == 6);
    return;
}
