# 0-1 Knapsack Problem 
This is the basic problem of Dynamic Programming.
Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. In other words, given two integer arrays val[0..n-1] and wt[0..n-1] which represent values and weights associated with n items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item, or don’t pick it (0-1 property).


### Sample Input
```
Enter the value of n: 3
Enter the values one by one:
 20 30 2
Enter their weight one by one:
 12 32 33
Enter the value of W: 45

```

### Sample Output
```
Maximum: 50

```
### Implemented in:
- [C](knap.c)
