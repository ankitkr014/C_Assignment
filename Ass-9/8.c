/***Write a program to calculate factorial of a number *****/
#include <stdio.h>
int findfact(int);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d", findfact(n));

    return 0;
}

int findfact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
        fact = fact * i;
    return fact;
}