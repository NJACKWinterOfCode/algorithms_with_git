# Check if a given number is Fibonacci number
A simple way is to generate Fibonacci numbers until the generated number is greater than or equal to ‘n’. Following is an interesting property about Fibonacci numbers that can also be used to check if a given number is Fibonacci or not.
A number is Fibonacci if and only if one or both of (5*n2 + 4) or (5*n2 – 4) is a perfect square (Source: Wiki). Following is a simple program based on this concept.

### Input Format

* Check if numbers from 1 to 10 are Fibonacci numbers or not.

### Output Format

* Prints if number is Fibonacci number or not.

### Sample Input

```sh
1
2
3
4
5
6
7
8
9
10
```

### Sample Output

```sh
1 is a Fibonacci Number
2 is a Fibonacci Number
3 is a Fibonacci Number
4 is a not Fibonacci Number
5 is a Fibonacci Number
6 is a not Fibonacci Number
7 is a not Fibonacci Number
8 is a Fibonacci Number
9 is a not Fibonacci Number
10 is a not Fibonacci Number
```

### Implemented in:

- [C](Check_if_given_number_is_Fibonacci_number.c)
- [C++](Check_if_given_number_is_Fibonacci_number.cpp)
- [Python](Check_if_given_number_is_Fibonacci_number.py)
- [Java](Check_if_given_number_is_Fibonacci_number.java)
