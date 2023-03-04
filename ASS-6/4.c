/********** Write a program to print next prime number of given number ***********/
#include <stdio.h>
#include <math.h>
int main()
{
    int div, n;
    printf("Enter a number ");
    scanf("%d", &n);
    for (++n; 1;)
    {
        for (div = 2; div <= sqrt(n); div++)
            if (n % div == 0)
                break;
        if (div > sqrt(n))
            printf("%d ", n);
        break;
    }
    return 0;
}