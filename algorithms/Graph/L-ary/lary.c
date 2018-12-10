#include <stdio.h>  
#include <stdlib.h>  
int size, l;  

// FUNCTION TO PRINT THE GIVEN ARRAY...  
void printArray(int arr[])   
{    
    int i;  
    for(i=0;i<size;i++)  
        printf("%d ",arr[i]);  
    if(size == 0)  
        printf("Empty (Please insert some elements!)");  
    printf("\n");   
}   

// FUNCTION TO SWAP...  
void swap(int *a, int *b)  
{  
    int temp=*a;   
    *a=*b;  
    *b=temp;  
}  
  
// FUNCTION TO MAX-HEAPIFY(SUCH THAT NO PARENT ELEMENT IS SMALLER THAN ITS CHILD)...  
void heapify(int arr[], int index)  
{  
    int child[l+1],i;  
    for (i=1; i<=l; i++)  
        child[i] = ((l*index + i) < size) ? (l*index + i) : -1;  
    int max_child = -1, max_child_index ;  
    for (i=1; i<=l; i++)  
    {  
        if (child[i] != -1 && arr[child[i]] > max_child)  
        {  
            max_child_index = child[i];  
            max_child = arr[child[i]];  
        }  
    }  
    if (max_child == -1)  
        return;  
    if (arr[index] < arr[max_child_index])  
        swap(&arr[index], &arr[max_child_index]);  
    heapify(arr, max_child_index);  
}  

// FUNCTION TO BUILD THE HEAP...  
void buildHeap(int arr[])  
{  
    int i;  
    for (i=(size-1)/l; i>=0; i--)  
        heapify(arr, i);  
}    
  
// FUNCTION TO INSERT A NEW ELEMENT IN THE HEAP...  
void insert(int arr[], int var)  
{  
    arr[size-1] = var;   
    int curr = size-1;  
    int parent = (curr-1)/l;  
    while (parent>=0)  
    {  
        if (arr[curr] > arr[parent])   
        {   
            swap(&arr[curr], &arr[parent]);  
            curr = parent;  
            parent = (curr -1)/l;  
        }  
        else  
            break;  
    }   
}  

// FUNCTION TO SEARCH THE GIVEN ELEMENT IN THE HEAP...  
int search(int a[], int v)  
{  
    int i;  
    for(i=0;i<size;i++)  
        if(a[i] == v)  
            return i;  
    return -1;  
}  

// FUNCTION TO DELETE THE GIVEN ELEMENT FROM THE HEAP...  
void delete(int a[], int v)  
{  
    int i,present = search(a,v);  
    if(present == -1)  
    {  
        printf("%d is not present in the heap: ",v);  
        printArray(a);  
        return;  
    }  
    printf("%d is deleted from the heap : ",v);    
    printArray(a);   
    swap(&a[present], &a[size-1]);  
    size--;  
    buildHeap(a);  
    printf("Heap after deletion : ");  
    printArray(a);  
}  

// MAIN FUNCTION...  
int main()  
{  
    int i,choice, var, *arr;  
    printf("Enter the total number of elements you want to insert in the heap in starting: ");  
    scanf("%d",&size);  
    printf("Enter the elements one by one: ");   
    arr = (int *)malloc(size*sizeof(int));  
    for(i=0;i<size;i++)  
        scanf("%d",&arr[i]);  
    printf("Enter the value of 'L' for your L-ary heap: ");  
    scanf("%d",&l);  
    buildHeap(arr);  
    printf("Built Heap : ");  
    printArray(arr);  
    printf("\nPress your keyboard button according to following:");  
    printf("\n1 if you want to insert a new element in the tree.");  
    printf("\n2 if you want to search a element.");  
    printf("\n3 if you want to delete a element.");  
    printf("\n4 if you want to exit.");  
    printf("\nEnter your choice: ");  
    scanf("%d",&choice);  
    while(choice != 4)  
    {  
        if(choice == 1)  
        {  
            printf("Enter the value of element you want to insert: ");  
            scanf("%d",&var);  
            size++;  
            arr = realloc(arr,size*sizeof(int));  
            insert(arr, var);  
            printf("Heap after insertion of %d: ",var);  
            printArray(arr);  
        }  
        else if(choice == 2)  
        {  
            printf("Enter the value of element you want to search: ");  
            scanf("%d",&var);  
            int present = search(arr,var);  
            if(present != -1)  
                printf("%d is present at position %d in the present heap: ",var,present+1);  
            else  
                printf("%d is not present in the given heap: ",var);  
            printArray(arr);  
        }  
        else if(choice == 3)  
        {  
            printf("Enter the value of element you want to delete: ");  
            scanf("%d",&var);  
            delete(arr,var);   
        }  
        else  
        {  
            printf("Enter a valid choice: ");  
            scanf("%d",&choice);  
            continue;  
        }  
        printf("\nAgain press your keyboard button accordingly:");  
        printf("\n1 if you want to insert a new element in the tree.");  
        printf("\n2 if you want to search a element.");  
        printf("\n3 if you want to delete a element.");  
        printf("\n4 if you want to exit.");  
        printf("\nEnter your choice: ");  
        scanf("%d",&choice);  
    }  
    return 0;  
}  
