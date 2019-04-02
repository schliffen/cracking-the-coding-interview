#ifndef _VECTOR_H_
#define _VECTOR_H_

/*

As crazy as it sounds, in this class we implement a vector. Implementing our own containers,
such as the vector class is ALWAYS a bad idea. This should only be done for EDUCATIONAL purposes.

Please take this code with a GRAIN OF SALT, chances are, it's buggy, leaks memory, and is infinitely slower
than the STL implementations.

*/

namespace ctci {

template <class T>
class  vector {
    public:

        // typedefs to make things look a bit prettier down there
        // else it'll start looking really messy
        typedef T* iterator;
        typedef const T* const_iterator;

        // default constructor
        vector();

        // constructor where we give this container an initial size
        vector(unsigned int size);

        // constructor where we give this container an initial size and default value
        vector(unsigned int size, const T& initial);

        // copy constructor
        vector(const vector<T>& v);

        // destructor
        ~vector();

        // get the maximum capacity of this container
        unsigned int capacity() const;

        // get the current size of this container
        unsigned int size() const;

        // get whether this container is empty
        bool empty() const;

        // begin iterator, useful for construting your iterator
        iterator begin();

        // const begin iterator, useful for construting your const iterator
        const_iterator const_begin();

        // end iterator, useful to check whether you've reached the end of your container
        iterator end();

        // const end iterator, useful to check whether you've reached the end of your container
        const_iterator const_end();

        // ??
        T& front();
        T& back();

        // push an item at the back of the container
        void push_back(const T& value);

        // pop an item off the end of this container
        void pop_back();

        // ??
        iterator erase(iterator it);

        // reverse our container
        void reserve(unsigned int capacity, T val = T());

        // resize our container to size, and set a default value val if growing the container
        void resize(unsigned int size, T val = T());

        // square bracket operators to access our vector items
        T& operator[](unsigned int index);
        T& operator[](unsigned int index) const;

        // assignment operator, copies content of other to self
        vector<T>& operator=(const vector<T>&);

        // clear the vector
        void clear();

    private:
        // keep track of the current size of the vector
        unsigned int my_size;

        // keep track of the capacity of the vector
        unsigned int my_capacity;

        // hold the actual data
        T* buffer;
};
}

#include "vector.hpp"

#endif
