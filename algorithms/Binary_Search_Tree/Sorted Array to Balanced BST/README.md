# Sorted array to Balanced Binary Search Tree:
  
Given a sorted array and we have to create a balanced binary search tree.

### Alogrithm

- Get the middle element of the array and make it root.
- Recursively do the same for left half and right half of the array.
	- Get the middle element of left half and make it left child of root created above.
	- Get the middle element of right half and make it right child of root created above.


### Input Format

- First line will ask for size of array.
- Next line will ask for the input of all elements of array.

### Output Format

Preorder Traversal of BST
(The preorder of traversal of BST) 

### Sample Input

```
8
1 2 3 4 5 6 7 8
```

### Sample Output

```
Preorder Traversal of BST
4 2 1 3 6 5 7 8 

```

### Time Complexity

The time complexity is O(n) where n is the size of given array.

### Implemented in:

- [C](inversion.c)

### Contributed by:
- [Rahul Indra](https://github.com/indrarahul2013)