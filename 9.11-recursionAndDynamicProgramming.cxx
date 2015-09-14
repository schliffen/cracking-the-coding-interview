/*
 * 9.11 Given a boolean expression consisting of the symbols 0,1, &, |, and ^ ,
 * and a desired boolean result value result, implement a function to count the
 * number of ways of parenthesizing the expression such that it evaluates to
 * result.
 *
 * EXAMPLE
 *
 * Expression: 1^0|0|1
 * Desired result: false (0)
 * Output: 2 ways.
 * 1^((0|0)|1) and 1^(0|(0|1))
 */

#include <string>
#include <cstdlib>
#include <assert.h>
#include "lib/utils/Utils.h"
#include "lib/datastructures/BinaryTree.h"
#include "lib/utils/BinaryTreeRenderer.h"
#include <vector>

using namespace std;

/*
 * I glanced at the provided code for this problem, it's clear that it's rather
 * convoluted and specific to the problem at hand. So here's a more generic
 * solution: we're going to build an expression parser, that builds a tree
 * of the expression. We'll then have the luxury of evaluating it, turning
 * it back into a string, rendering it to a dot file and generating alternate
 * parenthalised permutations that evaluate to the same result.
 */

// forward declarations of handy parsing functions
bool is_digit(string st);
bool is_digit(char c);
bool is_numeral(string& st);
bool is_operator(string st);

/* this is our parsetree class, it holds the parse expression
 * in the form of a tree. It inherits off an interface class
 * so that it can be rendered.
 */
template<class T>
class parsetree: public BinaryTreeBase<T> {
    public:
        parsetree():
            BinaryTreeBase<T>(),
            data(""),
            left(0),
            right(0) {
        }

        enum type {
            eEXPR,
            eOP,
            eNUM
        };

        virtual T get_data() {
            return data;
        }

        virtual parsetree* get_left() {
            return left;
        }

        virtual parsetree* get_right() {
            return right;
        }

        // given an operator string and two values,
        // perform the operation and return the result
        int op_on_op(string o, int l, int r) {
            if (o == "&") return l & r;
            if (o == "^") return l ^ r;
            if (o == "|") return l | r;
            return 0;
        }

        // evaluate the parsetree recursively
        int eval(parsetree* b) {
            if (!b)
                return 0;
            if (is_operator(b->data)) {
                int lv = eval(b->left);
                int rv = eval(b->right);
                int res = op_on_op(b->data, lv, rv);
                return res;
            } else if (is_numeral(b->data))
                return atoi(b->data.c_str());
        }

        // turn the parsetree back into a string
        void to_string(string& str, parsetree<T>* b) {
            if (!b)
                return;
            to_string(str, b->left);
            str += b->data;
            to_string(str, b->right);
        }
        T data;
        parsetree<T>* left;
        parsetree<T>* right;
};

//######################################
//     helper functions

bool is_digit(string st) {
    if (st.size() == 1) {
        char c = st.c_str()[0];
        return (c >= 48 && c <= 57);
    }
    return false;
}

bool is_digit(char c) {
    return (c >= 48 && c <= 57);
}

bool is_numeral(string& st) {
    bool is_num = st.size() > 0;
    for (size_t i = 0; i < st.size(); i++)
        if (!is_digit(st[i]))
            is_num = false;
    return is_num;
}

bool is_operator(string st) {
    return (st == "&" || st == "^" || st == "|");
}

int numeral_size(string& st) {
    int size = 0;
    for (size_t i = 0; i < st.size(); ++i) {
        if (!is_digit(st[i]))
            return size;
        ++size;
    }
    return size;
}

bool balanced_paren(string st) {
    int count = 0;
    for (size_t i = 0; i < st.size(); i++)
        if (st[i] == '(')
            ++count;
        else if (st[i] == ')') {
            --count;
            if (count < 0)
                return false;
        }
    return count == 0;
}

// end of helper functions
// ###############################################


// parse the given expression recursively, and build
// the tree into b if b is provided
bool parse_expr(string st, parsetree<string>* b = 0) {
    bool is_num = is_numeral(st);
    if (is_num) {
        if (b)
            b->data = st;
        return true;
    }

    if (!balanced_paren(st))
        return false;

    bool is_ex = false;
    bool is_between_paren = st[0] == '(' && st[st.size() - 1] == ')';
    string expr_no_paren;
    int expr_end = 0;
    if (is_between_paren) {
        string no_paren = st.substr(1, st.size() - 2);
        expr_no_paren = balanced_paren(no_paren) ? no_paren : st;
    } else {
        expr_no_paren = st;
    }

    for (size_t i = 1; i < expr_no_paren.size(); ++i) {
        if (parse_expr(expr_no_paren.substr(0, i), 0))
            expr_end = i;
    }
    if (expr_end != 0) {

        string expr_first_part = expr_no_paren.substr(0, expr_end);
        if (b) {
            b->left = new parsetree<string>();
            parse_expr(expr_first_part, b->left);
        }

        if (is_operator(expr_no_paren.substr(expr_end, 1))) {
            string exp_second_part = expr_no_paren.substr(expr_end + 1, expr_no_paren.size() - expr_end + 1);
            if (b) {
                b->data = expr_no_paren.substr(expr_end, 1);
                b->right = new parsetree<string>();
            }
            bool second_part_is_expr = parse_expr(exp_second_part, b ? b->right : 0);
            is_ex = second_part_is_expr;
        }
    }
    return is_num || is_ex;
}

//void reparen(string& str, parsetree<string>* b) {
//    if (!b)
//        return;
//    reparen(str, b->left);
//    str += b->data;
//    reparen(str, b->right);
//}

void test9_11() {
    parsetree<string> b;
    assert(parse_expr("1&5"));
    assert(parse_expr("(1&5)"));
    assert(parse_expr("(3&(500^2))"));
    assert(parse_expr("(3&(500^2))|3&(500^2)"));
    assert(parse_expr("((3&(500^2))|(3&(5^2)))", &b));

    printf("%d\n", b.eval(&b));
    string str;
    b.to_string(str, &b);
    printf("%s\n", str.c_str());

    renderBinaryTree(&b, "parse_tree");
}
