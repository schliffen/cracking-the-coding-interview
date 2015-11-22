#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "lib/datastructures/string.h"
#include "lib/datastructures/vector.h"
#include "assert.h"

// todo: this hash table only works with strings, generalise it to work with
// all data types

namespace ctci {
    struct Entry {
        ctci::string key;
        ctci::string value;
        Entry* next;
    };

    class hash_table {

    public:

        hash_table() {
        }

        ~hash_table() {
            for (size_t i = 0; i < table.size(); i++) {
                Entry* node = table[i];
                Entry* next = 0;
                while (node != 0) {
                    next = node->next;
                    delete node;
                    node = next;
                }
            }
        }

        unsigned int hash(const ctci::string& k) const {
            unsigned int val = 0;
            for (size_t i = 0; i < k.size(); i++) {
                val += abs(int(k[i]));
            }
            return val;
        }

        ctci::string& operator[](const ctci::string& k);

    private:
        vector<Entry*> table;
    };

    ctci::string& hash_table::operator[](const ctci::string& k) {

        // hash key into index
        unsigned int ind = hash(k);

        // resize table if needed
        if (ind >= table.size()) {
            table.resize(ind+1, 0);
        }

        // get node in table for index
        Entry* node = table[ind];

        // return last node in linked list
        while (node != 0) {
            if (node->key == k) {
                return node->value;
            }
            node = node->next;
        }

        // the key wasn't found, so let's create a node for it
        Entry* prev = 0;
        node = table[ind];
        Entry* new_entry = new Entry;
        new_entry->key = k;
        new_entry->value = ctci::string("");
        new_entry->next = 0;

        if (node == 0) {
            table[ind] = new_entry;
            node = new_entry;
        } else { // we have a key clash, so add new node to end of linked list
            while (node != 0) {
                prev = node;
                node = node->next;
            }
            node = new_entry;
            prev->next = node;
        }
        return node->value;
    }
}

#endif // HASH_TABLE_H

