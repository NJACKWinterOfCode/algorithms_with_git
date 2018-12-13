# Deleting a node from a Binary_Search_Tree

Binary Search Tree as the name suggests is a tree data structure that is used to maintain the data in a sorted order.
Binary here refers to the fact that each node has maximum two children,also taking into consideration that the left child is always smaller
than the parent node and the right child is bigger than the parent node.
This program deletes a node from the tree,the program will first check whether the node to be deleted is smaller or bigger than the root 
node, if it is smaller then traverse only the left subtree otherwise traverse the right subtree.

### Input Format

1)We need to enter the number of nodes we want in the tree and enter data for each node of the tree.
2)Enter the node we want to delete

### Output Format

The tree before deleting is displayed and then the tree after deleting is diplayed.

### Sample Input

```
 Enter the number of elements: 5
Enter the data: 15
Enter the data: 5
Enter the data: 3
Enter the data: 7
Enter the data: 9

Enter the data to delete: 3

```

### Sample Output

```
Initial tree inorder traversal: 3 5 7 9 15

Tree after deleting: 5 7 9 15
```

### Implemented in:

- [C++](https://github.com)