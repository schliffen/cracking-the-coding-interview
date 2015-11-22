#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "lib/datastructures/string.h"
#include "lib/datastructures/vector.h"
#include "assert.h"

// todo: this hash table only works with strings, generalise it to work with
// all data types. Also the hash function should probably be supplied
// by the caller.

namespace ctci {
    struct Entry {
        ctci::string key;
        ctci::string value;
        Entry* next;
    };

    class hash_table {
    public:

        hash_table();
        ~hash_table();

        unsigned int hash(const ctci::string& k) const;
        ctci::string& operator[](const ctci::string& k);

    private:
        vector<Entry*> table;
    };
}

#include "hash_table.hpp"

#endif // HASH_TABLE_H

