/*
 * 7.3
 * Given two lines on a Cartesian plane, determine whether the two
 * lines would intersect.
 */

#include <cmath>
#include "assert.h"
#include <cstdio>

const float epsilon = 0.0001;

class line {
    public:
        line(float s, float y):
            slope(s),
            y_intercept(y) {
        }
        bool intersect(line l2) {
            // if the slopes differ even slightly (i.e are not parallel)
            bool slopes_differ = fabs(slope - l2.slope) > epsilon;

            // or if the y intercept is pretty much the same
            bool y_intercept_is_same = fabs(y_intercept - l2.y_intercept) < epsilon;

            // then the slopes intersect
            return slopes_differ || y_intercept_is_same;
        }

        float slope;
        float y_intercept;
};

void test7_3() {
    assert(line(3, 0).intersect(line(2, 10)));
    assert(!line(3, 0).intersect(line(3, 10)));
    printf("7.3 passed!\n");
}
