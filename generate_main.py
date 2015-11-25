#!/usr/bin/env python
# -*- coding: utf-8 -*-

import glob, re

def get_n():
    N = []
    cxx = glob.glob("*.cxx")
    for c in cxx:
        m = re.match("(\d+\.\d+)-.*", c)
        if m:
            n = m.group(1)
            n = "_".join(n.split("."))
            N.append(n)

    return N

def main():

    main_cxx = open("main.cxx", "w")

    cxx = get_n()
    for c in cxx:
        main_cxx.write("void test%s();\n"%c)

    main_cxx.write("""
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

    for c in cxx:
        main_cxx.write("    test%s();\n"%c)

    main_cxx.write("    return 0;\n}\n")

    main_cxx.close()

if __name__ == "__main__":
    main()
