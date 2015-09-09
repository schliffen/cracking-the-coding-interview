#ifndef ASSERT_H
#define ASSERT_H

#include <signal.h>

#define assert(x) if (!(x)){ raise(SIGSEGV);}

#endif // ASSERT_H

