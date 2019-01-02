
# Shell Sort

ShellSort is mainly a variation of Insertion Sort. In insertion sort, we move elements only one position ahead. When an element has to be moved far ahead, many movements are involved. The idea of shellSort is to allow exchange of far items. In shellSort, we make the array h-sorted for a large value of h. We keep reducing the value of h until it becomes 1. An array is said to be h-sorted if all sublists of every h’th element is sorted.

### Input Format

* Enter the size of array

* Enter the element in array.

### Output Format

* Prints a single line the array after sorting is.

### Sample Input

```sh
5
2 4 1 3 5
```

### Sample Output

```sh
Array before sorting
2 4 1 3 5
Array after sorting
1 2 3 4 5
```

### Implemented in:

- [C](shell_sort.c)
- [C++](shell_sort.cpp)
- [Python](shell_sort.py)
