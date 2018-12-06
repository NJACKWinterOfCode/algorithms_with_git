#include <stdio.h>   

// FUNCTION TO MERGE TWO ARRAY IN SORTED ORDER AND RETURN NUMBER OF ODD PAIRS THERE...    
int merge(int arr[], int left, int mid, int right)  
{  
        int count = 0, i = left, j = mid, k = 0;  
        int aux[right-left+1];  
        while ((i <= mid - 1) && (j <= right))  
        {  
        if (arr[i] <= arr[j])  
                aux[k++] = arr[i++];  
        else  
        {  
                aux[k++] = arr[j++];  
                        count += (mid - i);  
        }  
        }  
        while (i <= mid - 1)  
        aux[k++] = arr[i++];  
        while (j <= right)  
        aux[k++] = arr[j++];  
        for (i=left; i <= right; i++)  
        arr[i] = aux[i-left];  
        return count;  
}  
  
// RECURSIVE FUNCTION TO FIND NUMBER OF ODD PAIRS IN THE GIVEN ARRAY...  
int mergeSort(int arr[], int left, int right)  
{  
        int mid, count = 0;  
        if (right > left)  
        {  
        mid = (right + left)/2;  
        count  = mergeSort(arr, left, mid);  
        count += mergeSort(arr, mid+1, right);  
        count += merge(arr, left, mid+1, right);  
        }  
        return count;  
}  
  
// MAIN FUNCTION...  
int main()  
{  
        int i, size, ans;  
        printf(" Enter the size of the array : ");  
        scanf("%d",&size);  
        int arr[size];  
        printf(" Enter the elements of your array one by one: ");  
        for(i=0;i<size;i++)  
                scanf("%d",&arr[i]);  
    ans = mergeSort(arr, 0, size - 1);  
        printf(" Number of inversions are %d \n", ans);  
}  
