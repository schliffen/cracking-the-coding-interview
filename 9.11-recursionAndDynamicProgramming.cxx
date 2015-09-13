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

        int op_on_op(string o, int l, int r) {
            if (o == "&") return l & r;
            if (o == "^") return l ^ r;
            if (o == "|") return l | r;
            return 0;
        }

        int eval(parsetree* b) {
            if (!b)
                return 0;
            if (b->data != "") {
                int lv = eval(b->left);
                int rv = eval(b->right);
                int res = op_on_op(b->data[0], lv, rv);
                return res;
            } else
                return atoi(b->data.c_str());
        }

        void to_string(string& str, parsetree* b) {
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

void parse(string st, parsetree<string>* b) {
    size_t p = string::npos;
    p = st.find_last_of("(");
    bool opFound;
    if (p != string::npos) {
        size_t q = st.find_first_of(")");
        parse(st.substr(p + 1, q - 1), b);
        return;
    } else {
        vector<string> operators;
        operators.push_back("|");
        operators.push_back("^");
        operators.push_back("&");
        for (size_t i = 0; i < operators.size() && !opFound; ++i) {
            p = st.find(operators[i]);
            if (p != string::npos) {
                b->left = new parsetree<string>;
                b->right = new parsetree<string>;
                b->data = operators[i];
                parse(st.substr(0, p), b->left);
                parse(st.substr(p + 1, st.size()), b->right);
                opFound = true;
            }
        }
    }
    if (!opFound)
        b->data = st;
}

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

bool is_expr(string st, parsetree<string>* b = 0) {
    bool is_num = is_numeral(st);
    if (is_num) {
        if (b)
            b->data = st;
        return true;
    }
    bool expr_min_size = st.size() >= 5;
    bool is_ex = false;
    if (expr_min_size) {
        bool start_is_open_paren = st[0] == '(';
        bool end_is_open_paren = st[st.size() - 1] == ')';
        bool is_between_paren = start_is_open_paren && end_is_open_paren;
        if (is_between_paren) {
            int expr_end = 0;
            string expr_no_paren = st.substr(1, st.size() - 2);
            for (size_t i = 1; i < expr_no_paren.size(); ++i) {
                if (is_expr(expr_no_paren.substr(0, i), 0))
                    expr_end = i;
            }
            if (expr_end != 0) {

                string expr_first_part = expr_no_paren.substr(0, expr_end);
                if (b) {
                    b->left = new parsetree<string>();
                    is_expr(expr_first_part, b->left);
                }

                if (is_operator(expr_no_paren.substr(expr_end, 1))) {
                    string exp_second_part = expr_no_paren.substr(expr_end+1, expr_no_paren.size()-expr_end+1);
                    if (b) {
                        b->data = expr_no_paren.substr(expr_end, 1);
                        b->right = new parsetree<string>();
                    }
                    bool second_part_is_expr = is_expr(exp_second_part, b ? b->right : 0);
                    is_ex = second_part_is_expr;
                }
            }
        }
    }
    return is_num || is_ex;
}

void parse_expr(string st, parsetree<string>* b) {

}

void test9_11() {
    parsetree<string> b;
    assert(is_expr("(1&5)"));
    assert(is_expr("(3&(500^2))"));
    assert(!is_expr("(3&(500^2))|(3&(500^2))"));
    assert(is_expr("((3&(500^2))|(3&(500^2)))", &b));
//    bool is_ex = is_expr("((3&(500^2))|(3&(500^2)))", &b); // pass
//    assert(is_ex);

    //    bool is_ex = is_expr("((3&(500^2))|(3&(500^2)))", &b);
    //    assert(is_ex);

    renderBinaryTree(&b, "parse_tree");
}

/*
            int operator_p = 0;
            for (size_t i = 0; i < expr_no_paren.size(); i++)
                if (is_operator(expr_no_paren[i]))
                {
                    operator_p = i;
                    break;
                }
            if (operator_p != 0) {
                string pre_op = expr_no_paren.substr(0, operator_p);
                string post_op = expr_no_paren.substr(operator_p+1, expr_no_paren.size() - operator_p);
                is_ex = is_expr(pre_op) && is_expr(post_op);
            }
*/
