#ifndef _VECTOR_H_
#define _VECTOR_H_

namespace ctci
{
    template <class T>
    class  vector
    {
    public:

        typedef T * iterator;

        vector();
        vector(unsigned int size);
        vector(unsigned int size, const T & initial);
        vector(const vector<T> & v);
        ~vector();

        unsigned int capacity() const;
        unsigned int size() const;
        bool empty() const;
        iterator begin();
        iterator end();
        T & front();
        T & back();
        void push_back(const T & value);
        void pop_back();

        void reserve(unsigned int capacity);
        void resize(unsigned int size);

        T & operator[](unsigned int index);
        T & operator[](unsigned int index) const;
        vector<T> & operator=(const vector<T> &);
        void clear();
    private:
        unsigned int my_size;
        unsigned int my_capacity;
        T * buffer;
    };

}

#include "vector.hpp"

#endif
