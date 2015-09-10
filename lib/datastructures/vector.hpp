#ifndef vector_HPP
#define vector_HPP

#include <cstdlib>

namespace ctci {

template<class T>
vector<T>::vector()
{
    my_capacity = 0;
    my_size = 0;
    buffer = 0;
    reallocatable = false;
}

template<class T>
vector<T>::vector(const vector<T> & v)
{
    my_size = v.my_size;
    my_capacity = v.my_capacity;
    buffer = new T[my_size];
    for (unsigned int i = 0; i < my_size; i++)
        buffer[i] = v.buffer[i];
}

template<class T>
vector<T>::vector(unsigned int size)
{
    my_capacity = size;
    my_size = size;
    buffer = new T[size];
}

template<class T>
vector<T>::vector(unsigned int size, const T & initial)
{
    my_size = size;
    my_capacity = size;
    buffer = new T [size];
    for (unsigned int i = 0; i < size; i++)
        buffer[i] = initial;
}

template<class T>
vector<T> & vector<T>::operator = (const vector<T> & v)
{
    delete[ ] buffer;
    my_size = v.my_size;
    my_capacity = v.my_capacity;
    buffer = new T [my_size];
    for (unsigned int i = 0; i < my_size; i++)
        buffer[i] = v.buffer[i];
    return *this;
}

template<class T>
typename vector<T>::iterator vector<T>::begin()
{
    return buffer;
}

template<class T>
typename vector<T>::const_iterator vector<T>::const_begin()
{
    return buffer;
}

template<class T>
typename vector<T>::iterator vector<T>::end()
{
    return buffer + size();
}

template<class T>
typename vector<T>::const_iterator vector<T>::const_end()
{
    return buffer + size();
}

template<class T>
T& vector<T>::front()
{
    return buffer[0];
}

template<class T>
T& vector<T>::back()
{
    return buffer[my_size - 1];
}

template<class T>
void vector<T>::push_back(const T & v)
{
    if (my_size >= my_capacity)
        reserve(my_capacity == 0 ? 5 : my_capacity * 2);
    buffer [my_size++] = v;
}

template<class T>
void vector<T>::pop_back()
{
    my_size--;
}

template<class T>
void vector<T>::reserve(unsigned int capacity)
{
    if(buffer == 0)
    {
        my_size = 0;
        my_capacity = 0;
    }

    if (reallocatable)
    {
        if (my_capacity == 0)
        {
            buffer = (T*)malloc(sizeof(T)*capacity);
        }
        else
        {
            buffer = (T*)realloc(buffer, sizeof(T)*capacity);
        }
    }
    else
    {
        T * Newbuffer = new T [capacity];
        unsigned int l_Size = capacity < my_size ? capacity : my_size;

        for (unsigned int i = 0; i < l_Size; i++)
            Newbuffer[i] = buffer[i];

        delete[] buffer;
        buffer = Newbuffer;
    }
    my_capacity = capacity;
}

template<class T>
unsigned int vector<T>::size()const//
{
    return my_size;
}

template<class T>
void vector<T>::resize(unsigned int size)
{
    reserve(size);
    my_size = size;
}

template<class T>
T& vector<T>::operator[](unsigned int index)
{
    return buffer[index];
}


template<class T>
T& vector<T>::operator[](unsigned int index) const
{
    return buffer[index];
}

template<class T>
unsigned int vector<T>::capacity()const
{
    return my_capacity;
}

template<class T>
vector<T>::~vector()
{
    if (reallocatable)
        free(buffer);
    else
        delete[ ] buffer;
}
template <class T>
void vector<T>::clear()
{
    my_capacity = 0;
    my_size = 0;
    buffer = 0;
}

}

#endif // vector_HPP
