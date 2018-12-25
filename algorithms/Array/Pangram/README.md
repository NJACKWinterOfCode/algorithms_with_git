# Pangram
  A string is said to be a *Pangram* if it contains all the 26 alphabets of the English language.

### Input Format
- The input consists of a string(with or without spaces)

 ### Output Format

   Tells whether the entered string is a Pangram or not.

### Sample Input

```
The quick brown fox jumps over the lazy dog
```
### Sample Output

``` 
It's a Pangram 
```
### How to do it?

We stored the string in a variable and iterated through the length of the string. We created a list of 26 indexes which is initialised with ```zero``` . We stored the count of each letter at the respective index of the list. For e.g. if the letter is ```a```, we will store it's count at ``` 0 th``` index , if it's ```z``` we'll store on the ```25th``` index and so on. At last we check if there are any ```zeroes``` in the list. If there is one, we come to know that, that particular letter is not present in the string.

### Time Complexity
  O(n), where 'n' is the length of the string entered.

### Implemented in:

 - [C++](Pangram.cpp)
 - [Python](Pangram.py)

