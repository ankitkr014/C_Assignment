// C Program to print first N odd natural numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, n;
    printf("Enter a number:- ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d ", 2 * i - 1);
        i++;
    }
    return 0;
}
