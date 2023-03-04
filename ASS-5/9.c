// Program to print first N terms of fibonacci Series
//-1 1 0 1 1 2 3 5 8 13 21 34 55
#include <stdio.h>
int main()
{
    int a = -1, b = 1, n;
    int c;
    printf("Enter a number of term ");
    scanf("%d", &n);
    while (n)
    {
        c = a + b;
        printf("%5d", c);
        a = b;
        b = c;
        n--;
    }
    return 0;
}
