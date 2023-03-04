// C Program to calculate sum of first n odd natural numbers
#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    scanf("%d", &n);
    while (i <= n)
    {
        // i=i*i;
        sum = sum + (2 * i - 1);
        i++;
    }
    printf("sum of first %d odd natural numbers=%d", n, sum);

    return 0;
}