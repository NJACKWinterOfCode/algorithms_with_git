# Z algorithm (Linear time pattern searching Algorithm)

 Z algorithm is a linear time string matching algorithm which runs in O(n) complexity. It is used to find all occurrence of a pattern in a string , which is common string searching problem.

### Input Format

- The input consists of two lines.
- First line will contain text.
- Second line will contain pattern to be searched.

### Output Format

- The output consists of M lines where M is no. of occurence of a pattern.
- Every line contains the indices of text where pattern is found in it.

### Sample Input

```
Hello World Good Morning or Good wishes
Good
```

### Sample Output

```
Pattern found at index 12
Pattern found at index 28
```

### Time Complexity

The algorithm runs in O(n) time. Characters are never compared at positions less than R, and every time a match is found, R is increased by one, so there are at most n comparisons.

### Implemented in:

- [C++](Z_Algorithms.cpp)


