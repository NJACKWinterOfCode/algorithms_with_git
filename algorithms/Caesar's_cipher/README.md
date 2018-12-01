# Caesar's Cipher
In cryptography, a Caesar's cipher, also known as the shift cipher, or Caesar shift, is one of the simplest and most widely known encryption techniques. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet.

For example, for a right shift of 5 :
‘A’ would be replaced by ‘F’ , ‘B’ with ‘G’ and so on.

You are given a string of text in encrypted form and you are provided with the “CLUE” string. Decipher the given text using the technique.
This program takes a string of length **N** and prints its deciphered string based on a CLUE provided.

### Input Format

- The input consists of two lines.
- In the first line, there will be a string of length **N**.
- In the second line, there will be string which will be the "CLUE".

### Output Format

A single string, the deciphered code word.

### Sample Input

```
Enter encrypted message: MRXIVZMIA
Enter "CLUE" : GPYI
```

### Sample Output

```
INTERVIEW
```

### Time Complexity

This algorithm runs in linear time as there is only one for loop which runs for the entire length of the encrypted text message.
Thus, the time complexity would be O(n), where n is the length of the encrypted string. 

### Implemented in:

- [C](Caesar's_cipher.c)
