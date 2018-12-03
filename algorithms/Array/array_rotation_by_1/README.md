# Array Rotation by 1 in (clockwise direction)

Suppose we have an array A[] = { 2 , 4 , 6 , 8 , 10} and we want to rotate this array in the clockwise direction by a step of 1.
This means we go on shifting the array elements one-by-one, one step to the right. When we reach the last element we simply move it to the first position.
So the rotated array X[] = {10 , 2 , 4 , 6 , 8}.

### Input Format

- The input consists of two lines.
- In the first line, there will be a number **N** which will denote the length of the array.
- In the second line, there will be the array elements separated by spaces.

### Output Format

The rotated array.

### Sample Input

```
8
1 2 4 5 7 8 9 6

```

### Sample Output

```
The rotated array is :
6 1 2 4 5 7 8 9

```

### How to do it?

The first thing that comes to our mind is to use a temporary array for storing the elements from the 2nd position(in the temporary array) and to store the last element(of original array) in the first position of the temporary array.
Although correct, this method uses up an extra O(N) space , N being the length of the array. So this method is not very space efficient. 
Thus we need an algorithm which is both space and time efficient to solve the problem.

To do that using constant space, we use the given algorithm :
1)Use a temporary variable t to store the last element of the original array.
2)Shift the elements from i = 0 position to i = i + 1 position.
3)Replace the first element of the array with the temporary variable t.


### Time Complexity

The time complexity is linear, that is, O(n) as we are using only one loop.
The space complexity is O(1), as we have used just a single extra variable and not an array for storing.

### Implemented in:

- [C](array_rotation.c)
