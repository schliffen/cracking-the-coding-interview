/*
 * 9.4
 * Write a method to return all subsets of a set.
 */

#include <iostream>
#include <assert.h>
#include <vector>

#include "lib/vector.h"

using namespace ctci;

typedef vector<int>             vec;
typedef vector<vector<int> >    vecs;

void print_set(vec S) {
    for (size_t i = 0; i < S.size(); i++)
        std::cout << S[i] << " ";
    std::cout << std::endl;
}

// get all subsets of the given set
vecs subsets(vec S) {
    vecs subset;
    subset.push_back(vec());

    for (size_t i = 0; i < S.size(); i++) {
        vecs subset_tmp = subset;

        for (size_t j = 0; j < subset_tmp.size(); j++)
            subset_tmp[j].push_back(S[i]);

        for (size_t j = 0; j < subset_tmp.size(); j++)
            subset.push_back(subset_tmp[j]);
    }
    return subset;
}

void test9_4() {
    vec vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    vecs sets = subsets(vec);

    assert(sets.size() == 8);
    std::cout << "9.4 passed!" << std::endl;
}

