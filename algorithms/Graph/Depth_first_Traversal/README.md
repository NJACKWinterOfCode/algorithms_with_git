# Depth First Traversal

This program inputs a graph and traverses through it depth first.
It uses recursion to achieve the same.

### Input Format

-First line contains two space separated integers, n and m.
-The m consecutive lines contains three space separated integers u, v and w, denoting an edge between vertex u and vertex v with weight w.
-The last line contains a single integer s denoting the source vertex.

### Output Format

Print two space separated integers in each line denoting the vertices visited while performing a DFS and the wieght of the edge traversed respectively.

### Sample Input

```
4 6
0 1 1
0 2 2
1 2 3
2 0 4
2 3 5
3 3 6
2
```

### Sample Output

```
2 -1
0 4
1 1
3 5
```

### Implemented in:

- [C++](dfs.cpp)
