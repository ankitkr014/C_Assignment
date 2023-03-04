// Program to check whether a given number is a term in fibonacci series or not.
// To comment:Ctrl+Shift+C
// To uncomment: Ctrl+Shift+X
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f1 = 0, f2 = 1, f3, n, i;
    printf("Enter a number of term ");
    scanf("%d", &n);
    if (n < 0)
        printf("\n Invalid input");
    else if (n == 0)
        printf("first term in fibonacci Series\n");
    else if (n == 1)
        printf("Second term in fibonacci Series\n");
    else if (n == 2)
        printf("Third term in fibonacci Series");
    else
    {
        for (i = 3; i < n; i++)
        {
            f1 = f2;
            f2 = f3;
            f3 = f1 + f2;
        }
        if (f3 == n)
            printf("Fibonacci number");
        else
            printf("Not a fibonacci number");
    }
    printf("\n%d", f3);
    return 0;
}
