/*
 * 9.8
 * Given an infinite number of quarters (25 cents), dimes (10 cents), nickels (5 cents)
 * and pennies (1 cent), write code to calculate the number of ways of representing n cents.
 */

#include "lib/datastructures/vector.h"
#include "lib/numeric.h"
#include "assert.h"
#include <cstdio>

#include <vector>
#include <numeric>

void pennies(ctci::vector<int> P, int n, ctci::vector<ctci::vector<int> >& results, ctci::vector<int> path) {
    int s = ctci::accumulate(path.begin(), path.end(), 0);
    if (s == n)
        results.push_back(path);
    else
        for (size_t p = 0; p < P.size(); p++)
            if (s + P[p] <= n) {
                path.push_back(P[p]);
                pennies(P, n, results, path);
            }
}

void test9_8() {
    ctci::vector<ctci::vector<int> > results;
    ctci::vector<int> path;
    ctci::vector<int> P(4);
    int n = 11;
    P[0] = 1;
    P[1] = 5;
    P[2] = 10;
    P[3] = 25;
    pennies(P, n, results, path);
    assert(results.size() != 0);
    for (size_t i = 0; i < results.size(); i++)
        assert(ctci::accumulate(results[i].begin(), results[i].end(), 0) == n);

    // results:
    //    1 1 1 1 1 1 1 1 1 1 1 = 11
    //    1 1 1 1 1 1 5 = 11
    //    1 1 1 1 1 5 1 = 11
    //    1 1 1 1 1 1 1 1 1 1 1 = 11
    //    1 1 1 1 1 1 5 = 11
    //    1 1 1 5 1 1 1 = 11
    //    1 1 5 1 1 1 1 = 11
    //    1 5 1 1 1 1 1 = 11

    printf("9.8 passed!\n");
}
