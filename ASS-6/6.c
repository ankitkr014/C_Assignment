/******** Write a program to print first N prime numbers *****/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0, num = 2, div;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (count < n)
    {
        for (div = 2; div <= sqrt(num); div++)
        {
            if (num % div == 0)
                break;
        }
        if (div > sqrt(num))
        {
            printf("%d ", num);
            count++;
        }

        num++;
    }
    return 0;
}