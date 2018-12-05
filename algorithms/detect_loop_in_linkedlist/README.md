# Detect loop in a Linked List and return starting point 
 Used Floyd's Loop detection algorithm:

 This is the fastest method. Traverse linked list using two pointers.  Move one pointer by one and other pointer by two.  If these pointers meet at same node then there is a loop.  If pointers do not meet then linked list doesn’t have loop.

Below are steps to find first node of loop:

1. If a loop is found, initialize slow pointer to head, let fast pointer be at its position.
2. Move both slow and fast pointers one node at a time.
3. The point at which they meet is the start of the loop.

#### Time Complexity: O(n)
#### Auxiliary Space: O(1)

### Input Format
Test Input through main driver function ()

### Output Format
Output of one line displaying "Loop does not exist", if loop not found
else "Loop starting node is " with starting node data.

### Sample Input
```
Input is supplied through main driver function.
```

### Sample Output
```
Loop starting node is 10
```
### Implemented in:
- [C++](detect_loop_in_linkedlist.cpp)
