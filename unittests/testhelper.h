#ifndef TESTHELPER_H
#define TESTHELPER_H
#include <cstdlib>
#include <cstdio>
#include <ctime>

/////////////////////////////////////
// Helper macros for running tests.//
/////////////////////////////////////

//
// START_TEST should be used with the name of
// the file (with the extension) in which it's being
// e.g for testvector.cpp, it would be run as:
// START_TEST(testvector)
//
#define START_TEST(x) void x(){

//
// pass a function into TEST with no arguments
// so to test the testVectorInit, you'd run:
// TEST(testVectorInit)
//
#define TEST(X) \
{\
std::clock_t start = std::clock();\
X();\
printf("passed: " #X " %lf s\n", (std::clock() - start) / (double)(CLOCKS_PER_SEC));\
}

//
// TEST macros are wrapped with START_TEST and END_TEST
// so add END_TEST to end your test function creation
//
#define END_TEST }

#endif // TESTHELPER_H

