#ifndef MERGESORT_H
#define MERGESORT_H

#include "lib/vector.h"
#include <vector>

std::vector<int> _merge(std::vector<int>& vec, const std::vector<int>& left, const std::vector<int>& right) {
    // Fill the resultant vector with sorted results from both vectors
    std::vector<int> result;
    unsigned left_it = 0, right_it = 0;

    while (left_it < left.size() && right_it < right.size()) {
        // If the left value is smaller than the right it goes next
        // into the resultant vector
        if (left[left_it] < right[right_it]) {
            result.push_back(left[left_it]);
            left_it++;
        } else {
            result.push_back(right[right_it]);
            right_it++;
        }
    }

    // Push the remaining data from both vectors onto the resultant
    while (left_it < left.size()) {
        result.push_back(left[left_it]);
        left_it++;
    }

    while (right_it < right.size()) {
        result.push_back(right[right_it]);
        right_it++;
    }

    //take a source vector and parse the result to it. then return it.
    vec = result;
    return vec;
}

std::vector<int> mergeSort(std::vector<int>& vec) {
    // Termination condition: List is completely sorted if it
    // only contains a single element.
    if (vec.size() == 1) {
        return vec;
    }

    // Determine the location of the middle element in the vector
    std::vector<int>::iterator middle = vec.begin() + (vec.size() / 2);

    std::vector<int> left(vec.begin(), middle);
    std::vector<int> right(middle, vec.end());

    // Perform a merge sort on the two smaller vectors
    left = mergeSort(left);
    right = mergeSort(right);

    return _merge(vec, left, right);
}

#endif // MERGESORT_H

