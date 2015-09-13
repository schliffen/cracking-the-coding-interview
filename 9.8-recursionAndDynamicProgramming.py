#!/usr/bin/env python
# -*- coding: utf-8 -*-

#
# 9.8
# Given an infinite number of quarters (25 cents), dimes (10 cents), nickels (5 cents)
# and pennies (1 cent), write code to calculate the number of ways of representing n cents.
#


def pennies(P, n, results, path=[]):
    s = sum(path)
    if s == n:
        results.append(path)
    else:
        for p in range(0, len(P)):
            if s + P[p] <= n:
                pennies(P, n, results, path + [P[p]])


def test9_8():
    results = []
    pennies(P=[1, 5, 10, 25], n=11, results=results, path=[])
    for r in results:
        assert(sum(r) == 11)

    # results:
    # [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
    # [1, 1, 1, 1, 1, 1, 5]
    # [1, 1, 1, 1, 1, 5, 1]
    # [1, 1, 1, 1, 5, 1, 1]
    # [1, 1, 1, 5, 1, 1, 1]
    # [1, 1, 5, 1, 1, 1, 1]
    # [1, 5, 1, 1, 1, 1, 1]
    # [1, 5, 5]
    # [1, 10]
    # [5, 1, 1, 1, 1, 1, 1]
    # [5, 1, 5]
    # [5, 5, 1]
    # [10, 1]

    print("9.8 passed!")

if __name__ == "__main__":
    test9_8()
