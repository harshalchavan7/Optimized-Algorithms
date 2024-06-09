# This folder contains the following searching types:

1. [Linear Search](#linear-search)
2. [Binary Search](#binary-search)

## Linear Search
Linear Search is a method for searching an element in a collection of elements. In Linear Search, each element of the collection is visited one by one in a sequential fashion to find the desired element. Linear Search is also known as Sequential Search.

Algorithm for Linear Search Algorithm:
The algorithm for linear search can be broken down into the following steps:

1. Start: Begin at the first element of the collection of elements.
2. Compare: Compare the current element with the desired element.
3. Found: If the current element is equal to the desired element, return true or index to the current element.
4. Move: Otherwise, move to the next element in the collection.
5. Repeat: Repeat steps 2-4 until we have reached the end of collection.
6. Not found: If the end of the collection is reached without finding the desired element, return that the desired element is not in the array.

## Binary Search
Binary search is a search algorithm used to find the position of a target value within a sorted array. It works by repeatedly dividing the search interval in half until the target value is found or the interval is empty. The search interval is halved by comparing the target element with the middle value of the search space.

Conditions to apply Binary Search Algorithm in a Data Structure:
To apply Binary Search algorithm:

1. The data structure must be sorted.
2. Access to any element of the data structure takes constant time.

Advantages of Binary Search:
1. Binary search is faster than linear search, especially for large arrays.
2. More efficient than other searching algorithms with a similar time complexity, such as interpolation search or exponential search.
3. Binary search is well-suited for searching large datasets that are stored in external memory, such as on a hard drive or in the cloud.

Disadvantages of Binary Search:
1. The array should be sorted.
2. Binary search requires that the data structure being searched be stored in contiguous memory locations. 
3. Binary search requires that the elements of the array be comparable, meaning that they must be able to be ordered.