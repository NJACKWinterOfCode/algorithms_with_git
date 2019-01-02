# Bellman Ford Shortest Path

Bellman Ford algorithm is an algorithm for finding the shortest path between a source node and all other nodes in a graph. The graph may contain negative weight cycle.

### Input Format

Input Consist of -  

- Number of vertices in the graph
- Number of edges in the graph
- List of edges in following format  

        source_vertex  destination_vertex  weight_of_the_edge 

- Source node

### Output Format

Output consist of - 

- A list of nodes with their shortest distance from the source vertex


### Sample Input

```
Enter the number of vertices: 9
Enter the number of edges: 14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
Enter the source vertex: 
0
```

### Sample Output

```
Vertex   Distance from Source
0		0
1		4
2		12
3		19
4		28
5		16
6		18
7		8
8		14
```

### Implemented in:

- [C++](Bellman_Ford/bellman_ford.cpp)
