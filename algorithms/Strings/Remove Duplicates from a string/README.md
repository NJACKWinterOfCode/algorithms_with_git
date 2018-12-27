# Removing Duplicates from String:
  
Given a n length of string which consist of several repeated letters in it. This algorithm removes those duplicates keeping the order of characters same. Here I use hashing method to check if the character is processed or not which makes this algorithm's time complexity to O(n) where naive method takes O(n\*n) time.

### Input Format

- The input asks for a string.

### Output Format

Resulted String : A string without duplicates. 

### Sample Input

```
Bananas
Mummy

```

### Sample Output

```
Resulted String : Bans
Resulted String : Mumy 

```

### Time Complexity

The time complexity is O(n) where n is the length of given string.

### Implemented in:

- [C](inversion.c)

### Contributed by:
- [Rahul Indra](https://github.com/indrarahul2013)