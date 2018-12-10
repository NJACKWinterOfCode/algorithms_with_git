# Delete duplicate elements from linkedlist

Linked Lists are linear data structure just like arrays but unlike arrays where the data is kept in contiguos locations,in linked list
the data is not contiguos.It basically consists of nodes and each node contains data and the address to the next node in the list.
Deleting duplicate elements from linkedlist means if two or more consecutive nodes have the same data then only one node will be retained
while others will be deleted.

### Input Format

We need to enter the number of nodes we want in the list and enter data for each node of the list

### Output Format

The linked list formed after deleting the duplicate nodes will be displayed 

### Sample Input

```
Enter the number of nodes in list: 7

Enter the data to be inserted to the node: 1

Enter the data to be inserted to the node: 3

Enter the data to be inserted to the node: 3

Enter the data to be inserted to the node: 3

Enter the data to be inserted to the node: 7

Enter the data to be inserted to the node: 7

Enter the data to be inserted to the node: 5
```

### Sample Output

```
The linked list created is: 5 7 7 3 3 3 1

The linked list after deleting duplicate element is: 5 7 3 1

```

### Implemented in:

- [C++](https://github.com)