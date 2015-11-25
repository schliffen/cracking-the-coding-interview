#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "lib/string.h"
#include "lib/vector.h"
#include "assert.h"

// todo: this hash table only works with strings, generalise it to work with
// all data types. Also the hash function should probably be supplied
// by the caller.

namespace ctci {

    template<class V>
    struct HashEntry {
        ctci::string key;
        V value;
        HashEntry* next;
    };

    template<class V>
    class hash_table {
    public:

        hash_table();
        ~hash_table();

        unsigned int hash(const ctci::string& k) const;
        V& operator[](const ctci::string& k);

    private:
        vector<HashEntry<V>*> table;
    };
}

#include "hash_table.hpp"

#endif // HASH_TABLE_H

