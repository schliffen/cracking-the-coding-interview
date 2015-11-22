/*
 * 8.10
 * Design and implement a hash table which uses
 * chaining (linked lists) to handle collisions.
 */

#include "lib/datastructures/hash_table.h"
#include "lib/datastructures/string.h"
#include "lib/utils/Utils.h"
#include <iostream>
#include "assert.h"

using namespace ctci;

// Answered in lib/datastructures/hash_table.h

void test8_10() {
    hash_table t;

    // create a few thousand key value pairs, all containing keyN -> valueN
    for (int i = 0; i < 10000; i++) {
        ctci::string key = "key" + ctci::string(SSTR(i).c_str());
        ctci::string value = "value" + ctci::string(SSTR(i).c_str());
        t.insert(key, value);
    }

    // now let's check the map contains what we expect it to
    for (int i = 0; i < 10000; i++) {
        ctci::string key = "key" + ctci::string(SSTR(i).c_str());
        ctci::string value = "value" + ctci::string(SSTR(i).c_str());
        if (t[key] != value) {
            std::cout << "expected map to contain " << value << " but it contained " << t[key] << std::endl;
            assert(false);
        }
    }

    std::cout << "8.1 passed!" << std::endl;
}
