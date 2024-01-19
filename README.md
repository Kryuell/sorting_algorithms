# 0x1B. C - Sorting algorithms & Big O

This repository contains the solutions to the sorting algorithms and Big O notation exercises for the ALX Africa SE program.

## Table of Contents

- [Introduction](#introduction)
- [Sorting Algorithms](#sorting-algorithms)
- [Big O Notation](#big-o-notation)
- [Contributors](#contributors)

## Introduction

In this project, we explore various sorting algorithms and analyze their time complexity using Big O notation. Sorting algorithms are essential in computer science as they allow us to arrange data in a specific order, making it easier to search, retrieve, and analyze.

## Sorting Algorithms

The following sorting algorithms are implemented in this project:

1. Bubble Sort: This algorithm repeatedly compares adjacent elements and swaps them if they are in the wrong order. It continues until the entire array is sorted.

2. Insertion Sort: This algorithm builds the final sorted array one item at a time. It iterates through the input array, comparing each element with the previous ones and inserting it at the correct position.

3. Selection Sort: This algorithm divides the input array into two parts: the sorted part and the unsorted part. It repeatedly selects the smallest element from the unsorted part and swaps it with the leftmost element of the unsorted part.

4. Quick Sort: This algorithm follows the divide-and-conquer approach. It selects a pivot element and partitions the array around the pivot, such that elements smaller than the pivot are on the left, and elements greater than the pivot are on the right. It then recursively sorts the sub-arrays.

5. Merge Sort: This algorithm also follows the divide-and-conquer approach. It divides the input array into two halves, recursively sorts them, and then merges the sorted halves.

## Big O Notation

Big O notation is used to describe the performance or complexity of an algorithm. It provides an upper bound on the growth rate of the algorithm's time complexity.

The following Big O notations are commonly used to analyze sorting algorithms:

- O(1): Constant time complexity. The algorithm takes the same amount of time regardless of the input size.
- O(log n): Logarithmic time complexity. The algorithm's time increases logarithmically with the input size.
- O(n): Linear time complexity. The algorithm's time increases linearly with the input size.
- O(n log n): Linearithmic time complexity. The algorithm's time increases linearly but also depends on the logarithm of the input size.
- O(n^2): Quadratic time complexity. The algorithm's time increases quadratically with the input size.
- O(2^n): Exponential time complexity. The algorithm's time doubles with each additional input element.

## Contributors

- Kryuell
- MounimNadir

