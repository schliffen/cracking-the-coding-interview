#ifndef VECTOR_H
#define VECTOR_H

#include <stdlib.h>
#include <assert.h>

template<class a_type>
class Vector
{
public:
    Vector():
        m_top(-1),
        m_internalSize(0),
        m_pData(0)
    {
    }

    Vector(int capacity):
        m_top(capacity-1),
        m_internalSize(0),
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
        return m_top+1;
    }

    void resize(int newSize)
    {
        m_pData = (a_type*)realloc(m_pData, newSize*sizeof(a_type));
        m_top = newSize-1;
        m_internalSize = newSize;
    }

    void push_back(a_type data)
    {
        m_top++;
        if (m_top >= m_internalSize)
        {
            if (m_internalSize == 0)
                m_internalSize = 1;
            m_internalSize *= 2;
            m_pData = (a_type*)realloc(m_pData, m_internalSize*sizeof(a_type));
        }
        assert(m_top < m_internalSize);

        m_pData[m_top] = data;
    }

private:
    int         m_top;
    int         m_internalSize;
    a_type*     m_pData;
};

void testVector();

#endif
