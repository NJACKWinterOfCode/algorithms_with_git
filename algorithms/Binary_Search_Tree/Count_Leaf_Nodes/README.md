# Count leaf nodes

Program to count the number of leaf nodes in a binary tree.

# How to solve?

procedure countLeaf(node)  
1) If node == NULL then return 0  
2) Else if left and right child nodes == NULL then return 1 
3) Else recursively calculate leaf count of the tree using the formula : 
    Leaf count of a tree = Leaf count of left subtree + Leaf count of right subtree
				

Firstly, we check if the node is null or not.
If yes, then there are no nodes in the tree and we simply return 0 as the leaf count.
If no, then we check if it has a left child and a right child or not.
We go on traversing until we find a node whose left and right children are NULL. Then we increment our counter and we check for the previous subtree.
This process goes on recursively for all the subtrees. Eventually we get our leaf node count.

### Input Format

- We construct a binary tree.


### Output Format

- Single integer indicating the number of leaf nodes.

### Sample Input

```
      1       
     / \
    2   3

   / \ / \    

  4  5 6  7    

```

### Sample Output

```
4

```


## Time Complexity
The time complexity is __O(N)__ for all tree traversal type problems.
The time taken is given by the recurrence relation : \n T(n) = T(k) + T(n – k – 1) + const, where k is the number of nodes on one side of root and (n-k-1) on the other side.
Using Master Theorem, we get the running time to be linear.
The space complexity is __O(N)__ considering the size of function call stack.

### Implemented in:

- [C](count_leaf.c)
