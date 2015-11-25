namespace ctci {

    template<class V>
    hash_table<V>::hash_table() {
    }

    template<class V>
    hash_table<V>::~hash_table() {
        for (size_t i = 0; i < table.size(); i++) {
            HashEntry<V>* node = table[i];
            HashEntry<V>* next = 0;
            while (node != 0) {
                next = node->next;
                delete node;
                node = next;
            }
        }
    }

    template<class V>
    unsigned int hash_table<V>::hash(const ctci::string& k) const {
        unsigned int val = 0;
        for (size_t i = 0; i < k.size(); i++) {
            val += abs(int(k[i]));
        }
        return val;
    }

    template<class V>
    V& hash_table<V>::operator[](const ctci::string& k) {

        // hash key into index
        unsigned int ind = hash(k);

        // resize table if needed
        if (ind >= table.size()) {
            table.resize(ind+1, 0);
        }

        // get node in table for index
        HashEntry<V>* node = table[ind];

        // return last node in linked list
        while (node != 0) {
            if (node->key == k) {
                return node->value;
            }
            node = node->next;
        }

        // the key wasn't found, so let's create a node for it
        HashEntry<V>* prev = 0;
        node = table[ind];
        HashEntry<V>* new_HashEntry = new HashEntry<V>;
        new_HashEntry->key = k;
        new_HashEntry->value = V();
        new_HashEntry->next = 0;

        if (node == 0) {
            table[ind] = new_HashEntry;
            node = new_HashEntry;
        } else { // we have a key clash, so add new node to end of linked list
            while (node != 0) {
                prev = node;
                node = node->next;
            }
            node = new_HashEntry;
            prev->next = node;
        }
        return node->value;
    }
}
