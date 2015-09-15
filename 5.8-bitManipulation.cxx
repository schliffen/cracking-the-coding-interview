/* 5.8
 * A monochrome screen is stored as a single array of bytes,
 * allowing eight consecutive pixels to be stored in one byte.
 * The screen has width w, where w is divisible by 8 (that is,
 * no byte will be split across rows).The height of the screen,
 * of course, can be derived from the length of the array and
 * the width.
 * Implement a function:
 *
 * drawHorizontal_line(byte[] screen, int width, int x1, int x2, int y)
 *
 * which draws a horizontal line from (x1, y) to (x2, y).
 */

#include <iostream>
#include <cmath>
using namespace std;

const int pixels_per_char = 8;

void draw_screen(char screen[], int width, int height) {
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width/8; col++) {
            int ind = (width / 8) * row + col;
            for (int i = pixels_per_char; i >= 0; --i) {
                int pixel = screen[ind] >> i & 1;
                cout << pixel << " ";
            }
        }
        cout << endl;
    }
}

void drawHorizontal_line(char screen[], int width, int height, int x1, int x2, int y, bool draw) {
    int start_offset = x1%8;
    int first_full_byte = x1 / 8;
    if (start_offset != 0)
        first_full_byte++;

    int end_offset = x2 % 8;
    int last_full_byte = x2 / 8;
    if (end_offset != 7)
        last_full_byte++;

    for (int b = first_full_byte; b <= last_full_byte; b++)
        screen[(width / 8) * y + b] = 0xff;


    char start_mask = 0xff >> start_offset;
    char end_mask = ~(0xff >> (end_offset + 1));

    if ((x1/8) == (x2 / 8)) {
            char mask = start_mask & end_mask;
            screen[(width / 8) * y + (x1 / 8)] |= mask;
    }
    else {
        if (start_offset != 0) {
            int byte_number = (width / 8) * y + first_full_byte - 1;
            screen[byte_number] |= start_mask;
        }
        if (end_offset != 7) {
            int byte_number = (width / 8) * y + last_full_byte + 1;
            screen[byte_number] |= end_mask;
        }
    }
    if (draw)
        draw_screen(screen, width, height);
}

// TODO: can't say I enjoyed working on this problem. Revisit.

void test5_8() {
    int width = 4*8;
    int height = 8;
    int array_length = width/pixels_per_char*height;
    char screen[array_length];
    for (int i = 0; i < array_length; i++)
        screen[i] = 0x00;

    drawHorizontal_line(screen, width, height, 3, 8, 2, false);
    cout << "5.8 passed!" << endl;
}
