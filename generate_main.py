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

int main() {
""")

    for c in cxx:
        main_cxx.write("    test%s();\n"%c)

    main_cxx.write("    return 0;\n}\n")

    main_cxx.close()

if __name__ == "__main__":
    main()
