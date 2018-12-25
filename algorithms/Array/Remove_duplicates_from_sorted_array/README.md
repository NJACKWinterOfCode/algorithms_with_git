#Remove duplicates from sorted array

Method:-
1-Create an auxiliary array temp[] to store unique elements.
2-Traverse input array and one by one copy unique elements of arr[] to temp[]. Also keep track of count of unique elements. Let this count be j.
3-Copy j elements from temp[] to arr[] and return j

###Input format
-First line ask for size of array.
-Next line ask to enter the number of elements in sorted form for that particular size.

<Sample Input>
5
1 1 2 3 3

###Output format
-A single line print the new array after removing repeated elements.

<Sample Output>
1 2 3

##Implemented in:-
-[C](<algorithms_with_git\algorithms\Array\Remove_duplicates_from_sorted_array>)
-[C++](<algorithms_with_git\algorithms\Array\Remove_duplicates_from_sorted_array>)