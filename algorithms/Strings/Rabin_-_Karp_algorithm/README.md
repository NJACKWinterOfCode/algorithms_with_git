#Rabin-Karp Algorithm

Rabin Karp algorithm matches the hash value of the pattern with the hash value of current substring of text, and if the hash values match then only it starts matching individual characters. So Rabin Karp algorithm needs to calculate hash values for following strings.

1) Pattern itself.
2) All the substrings of text of length m.


### Input Format

-Enter the text where the pattern needs to searched.
-Enter the pattern text.

### Output Format

-Returns the index where the pattern is present.

### Sample Input:
-ALGORITHMS WITH GIT
-GIT

### Sample Output:
-Pattern found at index 16

### Implemented in:

- [C](Rabin_-_Karp_algorithm.c)
- [C++](Rabin_-_Karp_algorithm.cpp)
