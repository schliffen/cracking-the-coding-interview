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

using namespace std;

struct bt {
    bt* left;
    bt* right;
    string op;
    int val;
    int op_on_op(char o, int l, int r) {
        switch (o) {
            case '&':
                return l & r;
            case '^':
                return l ^ r;
            case '|':
                return l | r;
            default:
                return 0;
        }
        return 0;
    }

    int eval(bt* b) {
        if (!b)
            return 0;
        if (b->op != "") {
            int lv = eval(b->left);
            int rv = eval(b->right);
            int res = op_on_op(b->op[0], lv, rv);
            return res;
        } else
            return b->val;
    }

    void to_string(string& str, bt* b) {
        if (!b)
            return;
        to_string(str, b->left);
        str += b->op != "" ? b->op : SSTR(b->val);
        to_string(str, b->right);
    }
};

void parse(string st, bt* b) {
    size_t p = string::npos;
    p = st.find_last_of("(");
    bool opFound;
    if (p != string::npos) {
        size_t q = st.find_first_of(")");
        parse(st.substr(p + 1, q), b);
        return;
    } else {
        char* operators = "&|^";
        for (int i = 0; i < 3 && !opFound; ++i) {
            p = st.find(operators[i]);
            if (p != string::npos) {
                b->left = new bt;
                b->right = new bt;
                b->op = operators[i];
                parse(st.substr(0, p), b->left);
                parse(st.substr(p + 1, st.size()), b->right);
                opFound = true;
            }
        }
    }
    if (!opFound)
        b->val = atoi(st.c_str());
}

void test_parse(string s, int v) {
    bt b;
    parse(s, &b);
    assert(b.eval(&b) == v);
}

//void parenthesise(bt& b) {

//}

void test9_11() {
    test_parse("0&0", 0&0);
    test_parse("1&1", 1&1);
    test_parse("1^0", 1^0);
    test_parse("(1^0)", (1^0));
    test_parse("1^0|0|1", (1^0|0|1));
    test_parse("(1^0|0|1^(1&0)|(0^1))^0", (1^0|0|1^(1&0)|(0^1))^0);
    bt b;
    parse("1^0|0|1", &b);
    string str;
    b.to_string(str, &b);
    assert(str == "1^0|0|1");
    //parenthesise(&b);
}
