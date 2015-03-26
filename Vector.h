#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>

template<class a_type>
class Vector
{
public:
    Vector():
        m_top(0),
        m_pData(0)
    {
    }

    Vector(int capacity):
        m_top(capacity),
        m_pData((a_type*)malloc(capacity*sizeof(a_type)))
    {
    }

    ~Vector()
    {
        free(m_pData);
        m_pData = 0;
    }

    a_type& operator[](int index)
    {
        return m_pData[index];
    }

    int size() const
    {
        return m_top;
    }

    void resize(int newSize)
    {
        m_pData = (a_type*)realloc(m_pData, newSize*sizeof(a_type));
    }

private:
    int         m_top;
    a_type*     m_pData;
};

void testVector();

#endif
