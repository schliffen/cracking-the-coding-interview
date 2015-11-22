#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "lib/datastructures/string.h"
#include "lib/datastructures/vector.h"
#include "assert.h"

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

        void insert(const ctci::string& k, const ctci::string& v) {
            unsigned int ind = hash(k);
            if (ind >= table.size()) {
                table.resize(ind+1, 0);
            }

            Entry* node = table[ind];
            Entry* prev = 0;

            Entry* new_entry = new Entry;
            new_entry->key = k;
            new_entry->value = v;
            new_entry->next = 0;

            if (node == 0) {
                table[ind] = new_entry;
            } else { // we have a key clash, so add new node to end of linked list
                while (node != 0) {
                    prev = node;
                    node = node->next;
                }
                node = new_entry;
                prev->next = node;
            }
        }

        ctci::string& get(const ctci::string& k) const {
            unsigned int ind = hash(k);
            Entry* entry = table[ind];
            assert(entry);
            do {
                if (entry->key == k) {
                    return entry->value;
                }
                entry = entry->next;
            } while (entry != 0);
            assert(false);
            ctci::string tmp;
            return tmp;
        }

    private:
        vector<Entry*> table;
    };

    ctci::string& hash_table::operator[](const ctci::string& k) {
        return this->get(k);
    }
}

#endif // HASH_TABLE_H

