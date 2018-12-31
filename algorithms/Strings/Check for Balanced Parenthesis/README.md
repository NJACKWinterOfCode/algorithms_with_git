# Check if Parenthesis are balanced in an expression:
  
Given a n length of expression which consist of parenthesis ('()','{}','[]') in it. This algorithm checks if the parenthesis are balanced in the expression that means the pairs and orders of "{","}","(",")","[","]" are correct.

### Algorithm
- Initialize a stack
- Now traverse the expression
	- If the current character is '(' or '{' or '[', then push it.
	- If the current character is ')' or '}' or ']' then pop it and check for the matching starting bracket, if not matched then return false else fine.
	- After complete traversal is stack is not empty then return false else fine.

### Input Format

- The input asks for a expression.

### Output Format

"It's Balanced" : If the parenthesis are balanced.
"It's not Balanced" : If the parenthesis aren't balanced. 

### Sample Input

```
()))({}
{()}[]

```

### Sample Output

```
It's not Balanced
It's Balanced 

```

### Time Complexity

The time complexity is O(n) where n is the length of given expression and Auxiliary Space is O(n) for stack.

### Implemented in:

- [C](inversion.c)

### Contributed by:
- [Rahul Indra](https://github.com/indrarahul2013)