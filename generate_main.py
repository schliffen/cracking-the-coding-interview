#!/usr/bin/env python
# -*- coding: utf-8 -*-

import glob, re
from textwrap import dedent

def get_n():
    N = []
    cpp = glob.glob("*.cpp")
    for c in cpp:
        m = re.match("(\d+\.\d+)-.*", c)
        if m:
            n = m.group(1)
            n = "_".join(n.split("."))
            N.append(n)

    return sorted(N)

def main():

    with open("main.cpp", "w") as main_cpp:

        cpp = get_n()

        declarations = ""
        for c in cpp:
            declarations += "void test%s();\n"%c

        tests = ""
        for c in cpp:
            tests += "    test%s();\n"%c

        doc = dedent("""
            %s

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

            %s
                return 0;
            }
            """)%(declarations, tests)

        main_cpp.write(doc)

if __name__ == "__main__":
    main()
