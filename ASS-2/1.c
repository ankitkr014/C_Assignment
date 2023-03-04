// Write a program to swap values of two variables in C.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = 20, temp;
    printf("Before swapping:\n");
    printf("a=%d,b=%d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping:\n");
    printf("a=%d,b=%d", a, b);
    return 0;
}
