#include "assert.h"

inline void set_bit_c(long *array, int bit) {
   *array |= 1<<bit;
}

inline void set_bit_asm(long *array, int bit) {
   asm("bts %1,%0" : "+r" (*array) : "g" (bit));
}

void assembly_fun() {
    long v = 2;
    set_bit_c(&v, 0);
    assert(v == 3);
}
