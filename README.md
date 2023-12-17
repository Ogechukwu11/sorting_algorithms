# Sorting Algorithms & Big O Notation

## Sorting Algorithms

Sorting algorithms are essential tools in computer science for arranging elements in a specific order. The efficiency of sorting algorithms is often evaluated based on their time complexity, which is expressed using Big O notation.

- [Bubble Sort](#bubble sort)

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until the list is sorted.

- [Selection Sort](#selection sort)

Selection Sort divides the list into a sorted and an unsorted region. It repeatedly selects the smallest (or largest) element from the unsorted region and swaps it with the first element of the unsorted region.

- [Insertion Sort](#insertion sort)

Insertion Sort builds the final sorted array one item at a time. It takes each element and places it in its correct position within the sorted part of the array.

- [Quick Sort](#quick sort)

Quick Sort also uses the divide-and-conquer approach. It selects a "pivot" element and partitions the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

- [Merge Sort](#merge sort)

Merge Sort follows the divide-and-conquer paradigm. It recursively divides the array into two halves, sorts them independently, and then merges the sorted halves to produce a fully sorted array.

# Big O Notation

Big O notation describes the upper bound on the growth rate of an algorithm's time complexity in the worst-case scenario. It helps us analyze and compare the efficiency of algorithms.

## O(1) - Constant Time

Algorithms with constant time complexity execute in the same amount of time regardless of the input size.

## O(log n) - Logarithmic Time

Logarithmic time complexity indicates that the algorithm's execution time grows logarithmically with the input size.

## O(n) - Linear Time

Linear time complexity implies a proportional relationship between the input size and the algorithm's execution time.

## O(n log n) - Linearithmic Time

Algorithms with linearithmic time complexity combine aspects of linear and logarithmic growth.

## O(n^2), O(n^3), ... - Polynomial Time

Polynomial time complexity represents algorithms with execution times proportional to the input size raised to a constant power.

## O(2^n), O(n!) - Exponential and Factorial Time

Exponential and factorial time complexities indicate rapidly increasing execution times as the input size grows.
