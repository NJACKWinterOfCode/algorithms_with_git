# Dijkstra Shortest Path

Dijkstra's algorithm is an algorithm for finding the shortest paths between nodes in a graph.

### Input Format

Input Consist of -  

- Number of vertices in the graph
- Number of edges in the graph
- List of edges in following format  

        source_vertex  destination_vertex  weight_of_the_edge 

- Source node
- Destination node

### Output Format

Output consist of - 

- A list consisting of the list of nodes it has to traverse(i.e path)
- Shortest distance


### Sample Input

```
Enter no of vertices = 5
Enter no of edges = 6
0 1 3
2 0 2
2 1 8
3 2 1
0 4 4
4 3 3
Enter source node = 1
Enter destination node = 4
```

### Sample Output

```
Shortest Path :
[1, 0, 4]
Shortest Distance = 7
```

### Implemented in:

- [Python](dijkstra.py)