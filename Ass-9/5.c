/****Write a program to calculate sum of first N natural number ***************/

#include <stdio.h>
int printsum(int);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("Sum of first %d natural number=%d", n, printsum(n));
    return 0;
}

int printsum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum = sum + i;
    return sum;
}
