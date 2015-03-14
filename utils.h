//
//  utils.h
//  test
//
//  Created by Oliver Shyal Beardsley on 24/12/2014.
//  Copyright (c) 2014 Oliver Shyal Beardsley. All rights reserved.
//

#ifndef __test__utils__
#define __test__utils__

#include <stdio.h>

void swap(void* a, void* b, unsigned short size);

void print3x3Matrix(int matrix[3][3]);

void print4x4Matrix(int matrix[4][4]);

bool getBit(int num, int i);
int setBit(int num, int i);
int clearBit(int num, int i);
int clearBitsMSBThroughI(int num, int i);
int clearBitsIThrough0(int num, int i);
int udpateBit(int num, int i, int v);
int testBitFunctions();

#endif /* defined(__test__utils__) */
