#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main() {
    int n; scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    int max = -INT_MAX;
    for(i=0; i<n; i++)
        if (arr[i]>max)
            max = arr[i];

    printf("%d\n",max);

    return 0;
}
