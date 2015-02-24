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
    list.cpp \
    2.1-listRemoveDuplicates.cpp

HEADERS += \
    1.2-reverseString.h	1.4-replaceSpaces.h	4th-edition/isRotation.h		utils.h 1.1-uniqueChars.h 1.3-anagrams.h		1.6-matrixRotation.h	main.h			4th-edition/zeroRowColumns.h \
    list.h \
    2.1-listRemoveDuplicates.h

QMAKE_CXXFLAGS = -Wno-write-strings -Wno-unused-parameter
