# Aho-Corasick Algorithm (Word Array searching Algorithm)

Aho-Corasick Algorithm finds all words in O(n + m + z) time where z is total number of occurrences of words in text. The Aho–Corasick string matching algorithm formed the basis of the original Unix command fgrep.

### Input Format

- The input consists of K+2 lines.
- First line will contain text.
- Next line will contain No. of word K.
- Next K line will contain word to be searched.

### Output Format

- The output consists of K+Z lines where Z is no. of occurence of a all word.
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

Aho-Corasick Algorithm finds all words in O(n + m + z) time where z is total number of occurrences of words in text.

### Implemented in:

- [C++](Aho_Corasick_Algorithm.cpp)


