# To check if a number is Magic number.

This program takes a number **N** and prints whether it is a magic number or not.

# What is a Magic number?

A number is said to be a magic number, if the recursive sum of digits upto a single digit is 1.
 In other words, if we have a number and we sum up its digits and get another number which is at least 2 digit number, then we have to again find the sum of the digits of this number.
 We carry on this process until we have a single digit number as the sum.
 If this single digit sum is 1, only then is the number said to be a Magic number.

# Explanation : 

For Example : 35011 is a Magic number
Explanation : 3 + 5 + 0 + 1 + 1 = 10
As we get 2 digit sum we have to again find the sum of its digits.
1 + 0 = 1
As we get 1 as the sum, so 35011 is a magic number

### Input Format

- The input consists of a single line.
- There will be a single integer **N**.


### Output Format

A simple message saying its Magic Number or not.

### Sample Input

```
167328

```

### Sample Output

```
It is not a MAGIC number
```

### Implemented in:

- [C](magic.c)
- [C++](magic.cpp)
