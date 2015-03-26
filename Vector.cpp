#include "Vector.h"
#include <assert.h>

void testSetSize()
{
    Vector<int> data(10);

    assert(data.size() == 10);

    for (int i = 0; i < 10; i++)
        data[i] = i;

    for (int i = 0; i < 10; i++)
        assert(data[i] == i);

    data.resize(20);

    assert(data.size() == 20);

    for (int i = 0; i < 20; i++)
        data[i] = i;

    for (int i = 0; i < 20; i++)
        assert(data[i] == i);

    data.resize(10);

    assert(data.size() == 10);
    
    for (int i = 0; i < 10; i++)
        data[i] = i;
    
    for (int i = 0; i < 10; i++)
        assert(data[i] == i);
}

void testZeroSize()
{
    Vector<int> data;

    assert(data.size() == 0);
    
    data.resize(10);

    assert(data.size() == 10);

    for (int i = 0; i < 10; i++)
        data[i] = i;

    for (int i = 0; i < 10; i++)
        assert(data[i] == i);

    data.resize(20);

    assert(data.size() == 20);

    for (int i = 0; i < 20; i++)
        data[i] = i;

    for (int i = 0; i < 20; i++)
        assert(data[i] == i);
}

void testPushBack()
{
    Vector<int> data;
    for (int i = 0; i < 1e6; i++)
        data.push_back(i);
    for (int i = 0; i < 1e6; i++)
        assert(data[i] == i);

    assert(data.size() == 1e6);
}

void testVector()
{
    testSetSize();
    testZeroSize();
    testPushBack();
}
