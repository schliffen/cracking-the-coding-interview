#include "Vector.h"
#include <assert.h>

void testSetSize()
{
    Vector<int> data(10);

    for (int i = 0; i < 10; i++)
        data[i] = i;

    for (int i = 0; i < 10; i++)
        assert(data[i] == i);

    data.resize(20);

    for (int i = 0; i < 20; i++)
        data[i] = i;

    for (int i = 0; i < 20; i++)
        assert(data[i] == i);
}

void testZeroSize()
{
    Vector<int> data;

    data.resize(10);

    for (int i = 0; i < 10; i++)
        data[i] = i;

    for (int i = 0; i < 10; i++)
        assert(data[i] == i);

    data.resize(20);

    for (int i = 0; i < 20; i++)
        data[i] = i;

    for (int i = 0; i < 20; i++)
        assert(data[i] == i);
}

void testVector()
{
    testSetSize();
    testZeroSize();
}
