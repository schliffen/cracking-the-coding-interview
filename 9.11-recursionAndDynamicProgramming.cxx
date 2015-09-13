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
            right(0)
        {
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
        operators.push_back("&");
        operators.push_back("^");
        operators.push_back("|");
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

void test9_11() {
    parsetree<string> b;
    parse("1&0", &b);
    renderBinaryTree(&b, "parse_tree");

}
