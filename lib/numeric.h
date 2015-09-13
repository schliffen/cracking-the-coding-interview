#ifndef NUMERIC_H
#define NUMERIC_H

namespace ctci {
template<class It, class T>
T accumulate(It begin, It last, T init_value) {
    while(begin != last)
        init_value += *(begin++);
    return init_value;
}
};

#endif // NUMERIC_H

