//
// Created by chen on 2024/9/8.
//
#ifndef Sortings_h
#define Sortings_h
#include <functional>
#include <iterator>

template<typename Iterator, typename Comparator = std::less<typename std::iterator_traits<Iterator>::value_type>>
void mergeSort(Iterator begin, Iterator end, Comparator cmp = Comparator());

template<typename Iterator, typename Comparator = std::less<typename std::iterator_traits<Iterator>::value_type>>
void quickSort(Iterator begin, Iterator end, Comparator cmp = Comparator());

template<typename Iterator, typename Comparator = std::less<typename std::iterator_traits<Iterator>::value_type>>
void naiveInsertionSort(Iterator begin, Iterator end, Comparator cmp = Comparator());

template<typename Iterator, typename Comparator = std::less<typename std::iterator_traits<Iterator>::value_type>>
void betterInsertionSort(Iterator begin, Iterator end, Comparator cmp = Comparator());

template<typename Iterator, typename Comparator = std::less<typename std::iterator_traits<Iterator>::value_type>>
void heapSort(Iterator begin, Iterator end, Comparator cmp = Comparator());

template<typename Iterator, typename Comparator = std::less<typename std::iterator_traits<Iterator>::value_type>>
void countingSort(Iterator begin, Iterator end, Comparator cmp = Comparator());

#include "Sortings.tpp"

#endif
