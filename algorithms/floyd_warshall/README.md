# Floyd-Warshall Algorithm

This program takes as input the description of a directed graph and finds the length of the shortest path between every pair of vertices.

### Input Format

- The first line of the input contains an integer **N**, the number of vertices in the graph.
- The second line of the input contains an integer **M**, the number of edges in the graph.
- **M** lines follow, each contains three integers **u**, **v**, and **w**, representing an edge from vertex **u** to vertex **v** having an edge weight of **w**. Vertices are **0-indexed (0 <= u, v < N)**.

### Output Format

Output consists of **N** lines. Each line contains **N** integers.
The **j**'th integer in the **i**'th line represents the length of the shortest path from vertex **i** to vertex **j**, where **0 <= i, j < N**.

### Sample Input

```
3
3
0 1 1
1 2 2
2 0 3
```

### Sample Output

```
    0    1    3
    5    0    2
    3    4    0
```

### Implemented in:

- [C++](floyd_warshall.cpp)