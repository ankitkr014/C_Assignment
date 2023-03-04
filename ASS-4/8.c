// C Program to print first N even natural number in reverse order
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, n;
    printf("Enter a number-> ");
    scanf("%d", &n);
    while (i < n)
    {
        printf("%d ", 2 * n - 2 * i);
        i++;
    }
    return 0;
}
