// C Program to print first 10 odd Natural number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", 2 * i - 1);
        i++;
    }

    return 0;
}
