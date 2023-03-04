// C program to calculate factorial of a number
#include <stdio.h>
int main()
{
    int n, count, fact;
    fact = 1, count = 1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d", &n);
    while (count <= n)
    {
        fact = fact * count; // fact=fact*i;
        count++;
    }
    printf("The Factorial of %d is : %d", n, fact);
    return 0;
}
