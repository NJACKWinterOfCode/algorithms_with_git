# To check whether a number is T-prime or not.

This program takes a number **N** and prints whether it is a t-prime number or not.

# What is a t-prime number?

We know that prime numbers are positive integers that have exactly two distinct positive divisors. Similarly, we'll call a positive integer n Т-prime, if n has exactly three distinct positive divisors.
So we can find t-prime by brootforce easily but we have an efficient method which is explained below.

# Explanation and algorithm

A number is t-prime if it satisfies the following conditions:
(i)  It is a perfect square.
(ii) It's square root is a prime number.

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
NO
```

### Implemented in:

- [C++](t_prime_number.cpp)
