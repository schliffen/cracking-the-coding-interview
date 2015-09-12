/*
 * 9.7 Implement the "paint fill" function that one might see on many
 * image editing programs. That is, given a screen (represented by a
 * two-dimensional array of colors), a point, and a new color, fill
 * in the surrounding area until the color changes from the original color.
 */

#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <unistd.h>

#include "assert.h"

typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned char uchar;

struct Bounds {
    Bounds(ushort l, ushort r, ushort b, ushort t):
        left(l),
        right(r),
        bottom(b),
        top(t) {
    }
    ushort left;
    ushort right;
    ushort bottom;
    ushort top;
};

template<class T>
class Image {
public:
    Image(ushort w, ushort h) {
        width = w;
        height = h;
        pixels = 0;
    }

    ~Image() {
        for (size_t i = 0; i < width; i++)
            free(pixels[i]);
        pixels = 0;
    }

    void paintFill(ushort pX, ushort pY, T colour, T threshold, Bounds b) {
        Image<bool> painted(width, height);
        painted.alloc();
        painted.fill(false, b);
        paintFillR(pX, pY, colour, pixels[pX][pY], threshold, b, painted);
    }

    void alloc() {
        pixels = (T**)malloc(width * sizeof(T*));
        for (size_t i = 0; i < width; i++)
            pixels[i] = (T*)malloc(height * sizeof(T));
    }

    void paintFillR(ushort pX, ushort pY, T colour, T initialColour, T threshold, Bounds& b, Image<bool>& painted) {
        assert(pX < painted.width && pY < painted.height);
        T diff = abs(pixels[pX][pY] - initialColour);
        bool p = painted.pixels[pX][pY];
        if (!p && diff <= threshold) {
            pixels[pX][pY] = colour;
            painted.pixels[pX][pY] = true;
            if (pX > b.left && pX > 0)
                paintFillR(pX - 1, pY, colour, initialColour, threshold, b, painted);
            if (pY < b.top && pY < height - 1)
                paintFillR(pX, pY + 1, colour, initialColour, threshold, b, painted);
            if (pX < b.right && pX < width - 1)
                paintFillR(pX + 1, pY, colour, initialColour, threshold, b, painted);
            if (pY >  b.bottom && pY > 0)
                paintFillR(pX, pY - 1, colour, initialColour, threshold, b, painted);
        }
    }

    void fill(T value, Bounds b) {
        for (size_t i = b.left; i < b.right; i++)
            for (size_t j = b.bottom; j < b.top; j++)
                pixels[i][j] = value;
    }

    void render(Bounds b) {
        for (int i = b.top - 1; i >= b.bottom; i--) {
            for (int j = b.left; j < b.right; j++) {
                uint numVal = (int)pixels[j][i];
                numVal ? printf("%d ", numVal) : printf("  ");
            }
            printf("\n");
        }
    }

    ushort width;
    ushort height;
    T** pixels;
    bool isAllocated;
};

void test9_7() {
    // create an 8 bit monochromatic image, that's 30 pixels wide, and 15 pixels high
    int width = 30;
    int height = 15;
    Image<ushort> img(width, height);
    img.alloc();

    // paint it black
    img.fill(0, Bounds(0, width, 0, height));

    // draw two slightly overlapping rectangles, with values 5 and 6
    img.fill(5, Bounds(width * 0.1, width * 0.7, height * 0.1, height * 0.7));
    img.fill(6, Bounds(width * 0.4, width * 0.8, height * 0.5, height * 0.8));
    // img.render(Bounds(0, width, 0, height));

    //
    //
    //
    //                         6 6 6 6 6 6 6 6 6 6 6 6
    //                         6 6 6 6 6 6 6 6 6 6 6 6
    //       5 5 5 5 5 5 5 5 5 6 6 6 6 6 6 6 6 6 6 6 6
    //       5 5 5 5 5 5 5 5 5 6 6 6 6 6 6 6 6 6 6 6 6
    //       5 5 5 5 5 5 5 5 5 6 6 6 6 6 6 6 6 6 6 6 6
    //       5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
    //       5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
    //       5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
    //       5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
    //       5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
    //       5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
    //


    // paintfill the outside with a value of 1, and a threshold of 0
    img.paintFill(0, 0, 1, 1, Bounds(0, width, 0, height));
    // img.render(Bounds(0, width, 0, height));

    //    1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    //    1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    //    1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    //    1 1 1 1 1 1 1 1 1 1 1 1 6 6 6 6 6 6 6 6 6 6 6 6 1 1 1 1 1 1
    //    1 1 1 1 1 1 1 1 1 1 1 1 6 6 6 6 6 6 6 6 6 6 6 6 1 1 1 1 1 1
    //    1 1 1 5 5 5 5 5 5 5 5 5 6 6 6 6 6 6 6 6 6 6 6 6 1 1 1 1 1 1
    //    1 1 1 5 5 5 5 5 5 5 5 5 6 6 6 6 6 6 6 6 6 6 6 6 1 1 1 1 1 1
    //    1 1 1 5 5 5 5 5 5 5 5 5 6 6 6 6 6 6 6 6 6 6 6 6 1 1 1 1 1 1
    //    1 1 1 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 1 1 1 1 1 1 1 1 1
    //    1 1 1 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 1 1 1 1 1 1 1 1 1
    //    1 1 1 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 1 1 1 1 1 1 1 1 1
    //    1 1 1 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 1 1 1 1 1 1 1 1 1
    //    1 1 1 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 1 1 1 1 1 1 1 1 1
    //    1 1 1 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 1 1 1 1 1 1 1 1 1
    //    1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1


    // paint the colour 6 black, with a threshold of 1
    img.paintFill(width * 0.5, height * 0.6, 0, 1, Bounds(0, width, 0, height));
    //img.render(Bounds(0, width, 0, height));

    // 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    // 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    // 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    // 1 1 1 1 1 1 1 1 1 1 1 1                         1 1 1 1 1 1
    // 1 1 1 1 1 1 1 1 1 1 1 1                         1 1 1 1 1 1
    // 1 1 1                                           1 1 1 1 1 1
    // 1 1 1                                           1 1 1 1 1 1
    // 1 1 1                                           1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1

    assert(img.pixels[0][0] == 1 && img.pixels[4][2] == 0);
    printf("9.7 passed!\n");
}
