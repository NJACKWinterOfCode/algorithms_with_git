# KMP (Knuth Morris Pratt) Pattern Searching Algorithm

 The Knuth–Morris–Pratt string-searching algorithm (or KMP algorithm) searches for occurrences of a "pattern" **pat** within a main "text 
string" **text** by employing the observation that when a mismatch occurs, the word itself embodies sufficient information to determine where 
the next match could begin, thus bypassing re-examination of previously matched characters. 

### Input Format

- The input consists of two lines.
- First line will contain text.
- Second line will contain pattern to be searched.

### Output Format

- The output consists of two lines.
- First line contains total number of times pattern is found in the text.
- Second line contains the indices of text where pattern is found in it.

### Sample Input

```
AABAACAADAABAABA PAABA
AABA
```

### Sample Output

```
Number of times pattern's found in the text is: 4
Pattern is found at these indices in the text : 0 9 12 18
```

### Implemented in:

- [C++](KMPsearch.cpp)


