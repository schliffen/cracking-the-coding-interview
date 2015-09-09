#ifndef TESTHELPER_H
#define TESTHELPER_H
#include <cstdlib>
#include <cstdio>
#include <ctime>

#if defined(RUN_AS_MAIN)
#define START_TEST(x) int main(int argc, char* argv[]){
#define TEST(X)\
{\
    std::clock_t start = std::clock();\
    if (argc == 1)\
        X();\
    else if (argc == 2)\
    {\
        int n = atoi(argv[1]); \
        for (int i = 0; i < n; i++)\
            X();\
    }\
    printf("passed: " #X " %lf s\n", (std::clock() - start) / (double)(CLOCKS_PER_SEC)); \
}
#define END_TEST }
#else
#define START_TEST(x) void x(){
#define TEST(X) \
{\
std::clock_t start = std::clock();\
X();\
printf("passed: " #X " %lf s\n", (std::clock() - start) / (double)(CLOCKS_PER_SEC));\
}
#define END_TEST }
#endif


#endif // TESTHELPER_H

