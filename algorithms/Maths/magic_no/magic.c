#include<stdio.h>

int main() {

    int n, d, temp, sum = 0;

    scanf("%d", &n);

    temp = n;
    while(temp > 0 || sum > 9){
        if (temp == 0){
            temp = sum;
            sum = 0;
        }
        d = temp % 10;
        sum += d;
        temp /= 10;
    }

    if(sum == 1)
        printf("%d is a MAGIC number", n);
    else
        printf("%d is NOT a MAGIC number", n);

    return 0;
}
