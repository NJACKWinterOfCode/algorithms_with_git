#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int Arr[n];
    int i,j;
   

    for(i=0;i<n;i++) 
     scanf("%d",&Arr[i]);

    for(i=1;i<n;i++)
     {
         j= i-1;
         int cmp= Arr[i];

         while(j>=0&&Arr[j]>cmp)
         {
             Arr[j+1]=Arr[j];
             j--;
         }

         Arr[j+1]=cmp;
     }

    for(i=0;i<n;i++)
     printf("%d ",Arr[i]);

    printf("\n"); 
} 