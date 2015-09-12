/*
 * 9.6 Implement an algorithm to print all valid
 * (e.g., properly opened and closed) combinations
 * of n-pairs of parentheses.
 * EXAMPLE Input: 3
 * Output: ( ( ( ) ) ) , ( ( ) ( ) ) , ( ( ) ) ( ) , ( ) ( ( ) ) , ( ) ( ) ( )
 */

#include <iostream>
#include "lib/datastructures/string.h"
#include "lib/datastructures/vector.h"
#include "assert.h"
#include <string>
#include <vector>

template<class S, class V>
void addParen(V& vec, S str, int leftRem, int rightRem, int count)
{
    if (leftRem < 0 || rightRem < leftRem) return;

    if (leftRem == 0 && rightRem == 0) {
        vec.push_back(str);
    }
    else {
        if (leftRem > 0) {
            str[count] = '(';
            addParen(vec, str, leftRem - 1, rightRem, count + 1);
        }

        if (rightRem > leftRem) {
            str[count] = ')';
            addParen(vec, str, leftRem, rightRem -1, count + 1);
        }
    }
}

template<class S, class V>
void testParenthesisPermutations() {
    int n = 2;
    S str("    ");
    V vec;
    addParen(vec,str, n, n, 0);

    S first = vec[0];
    S second = vec[1];

    assert(first == "(())");
    assert(second == "()()");
}

void test9_6() {
    //testParenthesisPermutations<std::string, std::vector<std::string> >();
    testParenthesisPermutations<ctci::string, ctci::vector<ctci::string> >();
}
