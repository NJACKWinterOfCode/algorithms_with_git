# Interpolation Search

<p>Given a sorted array of n uniformly distributed values arr[], write a function to search for a particular element x in the array.
Linear Search finds the element in O(n) time, Jump Search takes O(√ n) time and Binary Search take O(Log n) time.
The Interpolation Search is an improvement over Binary Search for instances, where the values in a sorted array are uniformly distributed. Binary Search always goes to the middle element to check. On the other hand, interpolation search may go to different locations according to the value of the key being searched. For example, if the value of the key is closer to the last element, interpolation search is likely to start search toward the end side. </p>

### Input Format

* Enter the size  of array(n).
* Enter the elements in sorted form of given size.
* Enter the element to be searched(x).


### Output Format

* Prints the index where x is located in the sorted array of size n.

### Sample Input
```sh
5
1 2 3 4 5
3
```

### Sample Output
```sh
Element found at index 2
```

### Implemented in:

- [C](Interpolation_search.c)
- [C++](Interpolation_search.cpp)
