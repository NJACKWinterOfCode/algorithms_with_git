# Kruskal Minimum Spanning Tree

Kruskal algorithm is an algorithm for finding the minimum spanning tree in a graph. Spanning tree of a graph is a subgraph that is a tree and connects all the vertices together. Minimum spanning tree is a spanning tree with weight less than or equal to every other spanning tree.

### Input Format

Input Consist of -  

- Number of vertices in the graph
- Number of edges in the graph
- List of edges in following format  

        source_vertex  destination_vertex  weight_of_the_edge 

### Output Format

Output consist of - 

- A list of nodes in the spanning tree along with their weights
- Minimum spanning tree weight 


### Sample Input

```
Enter the number of vertices: 4
Enter the number of edges: 5
0 1 10
0 2 6
0 3 5
1 3 15
2 3 4
```

### Sample Output

```
The edges in the spanning tree: 
3 -- 2 == 4
3 -- 0 == 5
1 -- 0 == 10
The weight of the spanning tree = 19
```

### Implemented in:

- [C++](Kruskal/kruskal.cpp)
