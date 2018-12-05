#include <stdio.h>
#include <stdlib.h>

void merge(int a[],int l[], int r[], int ls,int rs){

    int i=0,j=0,k=0;
    while (i < ls && j<rs ){
        if(l[i] <= r[j]){
            a[k] = l[i];
            i++;
        }else{
            a[k] = r[j];
            j++;
        }
        k++;
        
    }
    while(i < ls){
            a[k] = l[i];
            i++;
            k++;
        }
        while(j < rs){
            a[k] = r[j];
            j++;
            k++;
        }
}

void mergesort(int a[],int n){
    if(n < 2){
        return;
    }
    int i,j;
    int mid = n/2;
    int left[mid],right[n-mid];
    for(i=0;i < mid;i++){
        left[i] = a[i];
    }
    for(j=0;j<(n-mid);j++){
        right[j] = a[j+mid];
    }

    mergesort(left,mid);
    mergesort(right,(n-mid));{
    merge(a,left,right,mid,(n-mid));
    
}}
void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 

int main(){

int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
} 

mergesort(arr,n);
printArray(arr, n); 


    return 0;
}
