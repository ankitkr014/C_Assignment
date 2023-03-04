// Ass-14 : Write a program to calculate sum of first N natural numbers
//  i/p : n=5
// o/p=15
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0, i = 1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of  first %d natural number=%d", n, sum);
    return 0;
}
