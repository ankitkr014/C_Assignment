/*** Write a program to check whether a given number is even or odd (Return 1 if even otherwise return 0 *******/
#include <stdio.h>
int checkeven(int);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("%d", checkeven(n));
    return 0;
}

int checkeven(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}