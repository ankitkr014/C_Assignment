// C Program to print squares of first n natural numbers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d ", i * i);
        i++;
    }
    // printf("Squares of first %d natural numbers=%d",n,i*i);
    return 0;
}