// Write a C program to print a given number but without last digit = division operator

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    a = num / 10;
    printf("%d", a);
    return 0;
}
