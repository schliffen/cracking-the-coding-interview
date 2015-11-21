/*
 * 8.10
 * Design and implement a hash table which uses
 * chaining (linked lists) to handle collisions.
 */

#include "lib/datastructures/string.h"
#include "lib/datastructures/vector.h"
#include <math.h>
#include <iostream>

using namespace ctci;

namespace ctci {

    struct Entry {
        string key;
        string value;
        Entry* prev;
    };

    class hash_table {

    public:

        hash_table() {
        }

        unsigned int hash(const string& k) const {
            unsigned int val = 0;
            for (size_t i = 0; i < k.size(); i++) {
                val += abs(int(k[i]));
            }
            return val;
        }

        void insert(const string& k, const string& v) {
            unsigned int ind = hash(k);
            if (table.size() < ind) {
                table.resize(ind);
            }

            Entry* head = table[ind];

            Entry* entry = new Entry;
            entry->key = k;
            entry->value = v;
            table[ind] = entry;
        }

        string get(const string& k) const {
            unsigned int ind = hash(k);
            return table[ind]->value;
        }

    private:
        vector<Entry*> table;
    };

}

void test8_10() {
    hash_table t;
    t.insert("hello", "there");
    std::cout << t.get("hello") << std::endl;

}
