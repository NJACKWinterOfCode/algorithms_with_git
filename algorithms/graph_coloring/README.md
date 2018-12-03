# Graph Coloring

This program inputs a graph and finds all possible ways its nodes can be colored.
The coloring is such that no two adjacent nodes are of the same color.
It uses backtracking technique to achieve the same.

### Input Format

- The first line of input contains no of nodes and edges.
- It follows with entering all possible edges from source to destination

### Output Format

All possible combination of colors to color the graph

### Sample Input

```
4 4
1 2
2 3
3 4
1 4
```

### Sample Output

```
1 2 1 2
1 2 1 3
1 2 3 2
1 3 1 2
1 3 1 3
1 3 2 3
2 1 2 1
2 1 2 3
2 1 3 1
2 3 1 3
2 3 2 1
2 3 2 3
3 1 2 1
3 1 3 1
3 1 3 2
3 2 1 2
3 2 3 1
3 2 3 2
```

### Implemented in:

- [C](graph_coloring.c)
