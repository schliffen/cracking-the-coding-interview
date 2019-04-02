#!/usr/bin/env python
# -*- coding: utf-8 -*-

import glob, re

def get_n():
    N = []
    cpp = glob.glob("*.cpp")
    for c in cpp:
        m = re.match("(\d+\.\d+)-.*", c)
        if m:
            n = m.group(1)
            n = "_".join(n.split("."))
            N.append(n)

    return N

def main():

    main_cpp = open("main.cpp", "w")

    cpp = get_n()
    for c in cpp:
        main_cpp.write("void test%s();\n"%c)

    main_cpp.write("""
#include <cstdio>

#include "lib/Utils.h"
#include "lib/LinkedList.h"
#include "lib/Stack.h"
#include "lib/vector.h"
#include "unittests/testdlinkedlist.h"
#include "unittests/testlinkedlist.h"
#include "unittests/testvector.h"
#include "unittests/teststack.h"
#include "unittests/testqeueue.h"
#include "unittests/testsorting.h"
#include "unittests/testbinarytree.h"
#include "unittests/testbinarytreerenderer.h"
#include "unittests/teststring.h"

#include <iostream>

using namespace std;

void assembly_fun();

int main() {


    teststring();
    testLinkedList();
    testBitFunctions();
    testStack();
    testVector();
    testDLinkedList();
    testQueue();
    testBinaryTree();
    testBinaryTreeRenderer();

    // unit test algorithms
    testsorting();
    assembly_fun();

""")

    for c in cpp:
        main_cpp.write("    test%s();\n"%c)

    main_cpp.write("    return 0;\n}\n")

    main_cpp.close()

if __name__ == "__main__":
    main()
