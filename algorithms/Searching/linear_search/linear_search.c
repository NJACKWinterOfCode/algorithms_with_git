#include<stdio.h>
#include<stdlib.h>

int main() {

    int n, x, i, f = 0;

    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);

    for(i = 0; i < n; i++)
        if(a[i] == x){
            f=1;
            break;
        }

    if(f == 1)
        printf("%d is present at index %d\n", x, i);
    else
        printf("%d is not present in the array.\n", x);

    return 0;
}