# No. of Inversions in a ARRAY in O(nlogn):
  
Let X = X[1], . . . , X[n] be an array of n unique positive integers. A pair of elements (X[i] and X[j]) is called odd pair if pair of indices i and j are such that i < j but X[i] > X[j]. For example in the array [100, 3000, 1000, 700, 900], the pair i = 2 and j = 3 is an odd pair because X[2] = 3000 is greater than X[3] = 1000. On the other hand, the pair i = 1 and j = 2 is not an odd pair because X[1] = 100 is smaller than X[2] = 3000.

### Input Format

- The input consists of two lines.
- In the first line, there will be a number **N** which will denote the length of the array.
- In the second line, there will be the array elements separated by spaces.

### Output Format

The rotated array.

### Sample Input

```
5
12 2 8 89 7

```

### Sample Output

```
Number of inversions are 5 

```

### How to do it?

We will use merge sort algo for this...
In merge process, let i is used for indexing left sub-array and j for right sub-array. At any step in merge(), if a[i] is greater than a[j], then there are (mid – i) inversions. because left and right subarrays are sorted, so all the remaining elements in left-subarray (a[i+1], a[i+2] … a[mid]) will be greater than a[j]


### Time Complexity

The time complexity is O(nlogn).

### Implemented in:

- [C](inversion.c)
