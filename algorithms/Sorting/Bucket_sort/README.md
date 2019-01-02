# Bucket Sort

Bucket sort is mainly useful when input is uniformly distributed over a range. For example, consider the following problem.
Sort a large set of floating point numbers which are in range from 0.0 to 1.0 and are uniformly distributed across the range. How do we sort the numbers efficiently?

A simple way is to apply a comparison based sorting algorithm. The lower bound for Comparison based sorting algorithm (Merge Sort, Heap Sort, Quick-Sort .. etc) is Ω(n Log n), i.e., they cannot do better than nLogn.
Can we sort the array in linear time? Counting sort can not be applied here as we use keys as index in counting sort. Here keys are floating point numbers.

### Input Format

* Contains elements between `0 to 1` in array {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434}

### Output Format

* Prints a single line of sorted array.

### Sample Input

```sh
0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434
```

### Sample Output

```sh
Sorted array is
0.1234 0.3434 0.565 0.656 0.665 0.897
```

### Implemented in:

- [C++](Bucket_sort.cpp)
