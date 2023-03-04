// C Program to calculate sum of squares of first N natural numbers
#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    scanf("%d", &n);
    while (i <= n)
    {
        // i=i*i;
        sum = sum + i * i;
        i++;
    }
    printf("sum of squares of first %d natural numbers=%d", n, sum);

    return 0;
}
