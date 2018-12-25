# Min Cost Path:
  
Given a 2D matrix we use Dynamic Programming approach to find minimum cost path to reach (l,k) position from (1,1) of 2D Matrix which takes O(mn) time complexity.

### Input Format

- The input asks for size of matrix **n** & **m**.
- Then input the matrix values.
- In last input the value of **l**,**k** where we have to go.

### Output Format

Min Cost path from (1,1) to (k,l): N (N being the min cost value). 

### Sample Input

```
3 3
1 2 3  
4 5 6
7 8 9
3 3

```

### Sample Output

```
Min Cost path from (1,1) to (k,l): 21 

```

### Time Complexity

The time complexity is O(mn).

### Implemented in:

- [C++](mincost.cpp)
