# Depth First Traversal

This program inputs a graph and traverses through it depth first.
It uses the traditional enqueue operations to achieve the same.

### Input Format

- There is no need to give separate inputs to the program.
- The graph has to be built by adding the edges in main itself.

### Output Format

A single line which shows traversal of the graph from a vertex.

### Sample Input

```
(0, 1)
(0, 2) 
(1, 2) 
(2, 0) 
(2, 3) 
(3, 3)

```
### Sample Output

```
Following is Depth First Traversal (starting from vertex 2)
2 0 1 3

```
### Implemented in:

- [Java](DFSGraph.java)
