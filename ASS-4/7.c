// C Program to print first 10 odd natural numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 1;
    printf("Enter a no:- ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d\n", 2 * i - 1);
        i++;
    }
    return 0;
}
