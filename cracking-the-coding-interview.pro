TEMPLATE = app
TARGET = test
CONFIG += debug
QT += core
SOURCES += \
    main.cpp \
    utils.cpp \
    1.6-matrixRotation.cpp \
    1.4-replaceSpaces.cpp \
    1.3-anagrams.cpp \
    1.2-reverseString.cpp \
    1.1-uniqueChars.cpp \
    4th-edition/isRotation.cpp \
    4th-edition/zeroRowColumns.cpp \
    4.1-treeBalanced.cpp \
    list.cpp \
    2.1-listRemoveDuplicates.cpp \
    binaryTreePrettyPrint.cpp \
    binarytree.cpp \
    5.1.cpp

HEADERS += \
    1.2-reverseString.h	1.4-replaceSpaces.h \
    4th-edition/isRotation.h \
    utils.h \
    1.1-uniqueChars.h \
    1.3-anagrams.h \
    1.6-matrixRotation.h \
    main.h \
    4th-edition/zeroRowColumns.h \
    list.h \
    binaryTreePrettyPrint.h \
    2.1-listRemoveDuplicates.h \
    binarytree.h \
    4.1-treeBalanced.h \
    5.1.h

QMAKE_CXXFLAGS = -Wno-write-strings -Wno-unused-parameter
