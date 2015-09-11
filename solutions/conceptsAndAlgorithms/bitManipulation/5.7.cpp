#include "5.7.h"
#include <bitset>
#include <iostream>

using namespace std;

void test5_7()
{
    int ar[19] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,18,19};
    int missing = -1;
    int t = 0;

    for (int i = 0; i <= 19; i++)
    {
        int arval = ar[i];
        short b0 = bitset<sizeof(i)*8>(arval)[0];
        if ((t == 0 || t == 6))
        {
            if (b0 == 0)
            {
            }
            else
            {
                missing = ar[i]-1;
                break;
            }
        }
        else if (t % 2 == b0)
        {

        }
        else if (t % 2 != 0 && b0 == 1)
        {

        }
        else
        {
            missing = ar[i]-1;
            break;
        }
        t = t == 9 ? 0 : t + 1;
    }
    cout << "missing is " << missing << endl;
}
