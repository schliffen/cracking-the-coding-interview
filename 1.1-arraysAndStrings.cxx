#include "assert.h"
#include <iostream>
#include <map>
#include "lib/datastructures/string.h"
#include "lib/datastructures/hash_table.h"

/*
 * 1.1 Implement an algorithm to determine if a string has
 * all unique characters. What if you cannot use additional
 * data structures?
 */

// solution in C++, with additional data structure. O(n)
bool unique_cpp(const std::string& str) {
    std::map<char, int> chars;
    for (std::string::const_iterator it = str.begin(); it != str.end(); it++) {
        if (chars[*it] == 1)
            return false;
        chars[*it] = 1;
    }
    return true;
}

// solution in C++, without additional data structure. O(n**2)
bool unique_cpp2(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        size_t f = str.find(str[i]);
        if (f != i && f != std::string::npos) {
            return false;
        }
    }
    return true;
}

// solution in C++, with homegrown ctci::hash_table and ctci::string class. O(n)
bool unique_cpp3(const ctci::string& str) {
    ctci::hash_table<int> chars;
    for (size_t i = 0; i < str.size(); i++) {
        if (chars[str[i]] == 1)
            return false;
        chars[str[i]] = 1;
    }
    return true;
}

// solution in C++, using homegrown ctci::string class, and without additional data structure. O(n**2)
bool unique_cpp4(const ctci::string& str) {
    for (size_t i = 0; i < str.size(); i++) {
        size_t f = str.find(str[i]);
        if (f != i && f != ctci::string::npos) {
            return false;
        }
    }
    return true;
}

// solution in C, with an array. Equivalent to solution provided in the book. This runs in O(n).
// ascii_n could be 255 in which case it could segfault, make this platform independent
bool unique_c(const char* s) {
    int ascii_n[128] = {0};
    for (int i = 0; s[i] != '\0'; ++i) {
        if (ascii_n[(int)s[i]])
            return false;
        ascii_n[(int)s[i]]++;
    }
    return true;
}


// this function gets called from main.cxx
void test1_1() {
    // TDD approach: if we don't assert, then we've passed
    assert(!unique_c("foobar"));
    assert(unique_c("spam"));
    assert(!unique_cpp("foobar"));
    assert(unique_cpp("spam"));
    assert(!unique_cpp2("foobar"));
    assert(unique_cpp2("spam"));
    assert(!unique_cpp3("foobar"));
    assert(unique_cpp3("spam"));
    assert(!unique_cpp4("foobar"));
    assert(unique_cpp4("spam"));
    std::cout << "1.1 passed!" << std::endl;
}
