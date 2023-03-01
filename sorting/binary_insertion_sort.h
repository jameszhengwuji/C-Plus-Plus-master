/**
 * \file
 * \brief [Binary Insertion Sort Algorithm
 * (Insertion Sort)](https://en.wikipedia.org/wiki/Insertion_sort)
 *
 * \details
 * If the cost of comparisons exceeds the cost of swaps, as is the case for
 * example with string keys stored by reference or with human interaction (such
 * as choosing one of a pair displayed side-by-side), then using binary
 * insertion sort may yield better performance. Binary insertion sort employs a
 * binary search to determine the correct location to insert new elements, and
 * therefore performs ⌈log2 n⌉ comparisons in the worst case. When each element
 * in the array is searched for and inserted this is O(n log n). The algorithm
 * as a whole still has a running time of O(n2) on average because of the series
 * * of swaps required for each insertion. However it has several advantages
 * such as
 * 1. Easy to implement
 * 2. For small set of data it is quite efficient
 * 3. More efficient that other Quadratic complexity algorithms like
 *    Selection sort or bubble sort.
 * 4. It is efficient to use it when the cost of comparison is high.
 * 5. It's stable that is it does not change the relative order of
 *    elements with equal keys.
 * 6. It can sort the array or list as it receives.
 *
 * Example execution steps:
 * 1. Suppose initially we have
 * \f{bmatrix}{40 &30 &20 &50 &10\f}
 * 2. We start traversing from 40 till we reach 10
 * when we reach at 30 we find that it is not at it's correct place so we take
 * 30 and place it at a correct position thus the array will become
 * \f{bmatrix}{30 &40 &20 &50 &10\f}
 * 3. In the next iteration we are at 20 we find that this is also misplaced so
 * we place it at the correct sorted position thus the array in this iteration
 * becomes
 * \f{bmatrix}{20 &30 &40 &50 &10\f}
 * 4. We do not do anything with 50 and move on to the next iteration and
 * select 10 which is misplaced and place it at correct position. Thus, we have
 * \f{bmatrix}{10 &20 &30 &40 &50\f}
 */

#ifndef BINARY_INSERTION_SORT_H
#define BINARY_INSERTION_SORT_H

#include <algorithm>  /// for algorithm functions
#include <cassert>    /// for assert
#include <iostream>   /// for IO operations
#include <vector>     /// for working with vectors

/**
 * \namespace sorting
 * @brief Sorting algorithms
 */
namespace sorting {
/**
 * \brief Binary search function to find the most suitable pace for an element.
 * \tparam T The generic data type.
 * \param arr The actual vector in which we are searching a suitable place for
 * the element. \param val The value for which suitable place is to be found.
 * \param low The lower bound of the range we are searching in.
 * \param high The upper bound of the range we are searching in.
 * \returns the index of most suitable position of val.
 */
template <class T>
int64_t binary_search(std::vector<T> &arr, T val, int64_t low, int64_t high);
/**
 * \brief Insertion sort function to sort the vector.
 * \tparam T The generic data type.
 * \param arr The actual vector to sort.
 * \returns Void.
 */
template <typename T>
void insertionSort_binsrch(std::vector<T> &arr);
}  // namespace sorting

#endif