#include <iostream>
#include <limits.h>
#include <string>
#include <assert.h>
#include "lib/utils/Utils.h"

#include <stdlib.h>     /* atoi */

using namespace std;

// Given a real number between 0 and 1 (e.g., 0.72) that is passed in as a double,
// print the binary representation. If the number cannot be represented accurately
// in binary with at most 32 characters, print "ERROR."

void itob(int n, string& buf)
{
    if (n / 2 != 0)
        itob(n / 2, buf);
    buf += n % 2 ? "1" : "0";
}

string getBitsForDouble(double d)
{
    if (d < 0.0f || d > 1.0f)
        return "ERROR";

    string numS(SSTR(d));
    size_t p = numS.find(".");

    assert(p != string::npos);

    string mantissaS = numS.substr(p+1, numS.size());
    int mantissa = atoi(numS.substr(p+1, numS.size()).c_str());

    string str("");
    itob(mantissa, str);
    return str;
}

void test5_2()
{
    string str = getBitsForDouble(0.72f);
    cout << "5.2 passed!" << endl;
}
