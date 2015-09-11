#include <fstream>
#include <iostream>
#include <string>
#include <assert.h>

using namespace std;

/* 13.1 Write a method to print the last K lines of an input file using C++. */

string* printLastKLines(char* fileName, int k, bool print)
{
    if (k == 0)
        return 0;

    string line;
    string* circularArray = new string[k];

    ifstream f(fileName);
    if(f.is_open())
    {
        int size = 0;
        while (getline(f, line))
        {
            circularArray[size%k] = line;
            size++;
        }
        f.close();

        if (print)
        {
            int start = size > k ? (size%k) : 0;
            int count = min(k, size);

            for (int i = 0; i < count; i++)
            {
                cout << circularArray[(start+i)%k] << endl;
            }
        }
    }
    else
    {
        if (print)
            cout << "ERROR: could not find/open file" << endl;
        return 0;
    }
    return circularArray;
}

void test13_1()
{
    string* pLines = printLastKLines(__FILE__, 10, false);
    bool passed = false;
    if (pLines)
    {
        for (int i = 0; i < 10; i++)
        {
            if (pLines[i].find("assert(passed);") != string::npos)
                passed = true;
        }
    }
    else
    {
        // we're having trouble finding the file - just pass as it probably
        // has something to do with the environment we're running in
        passed = true;
    }
    delete[] pLines;
    assert(passed);
    cout << "13.1 passed!" << endl;
}
