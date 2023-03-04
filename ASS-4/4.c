// W.A.P in c to print first N natural number in reverse order

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (n >= 1)
    {
        printf("%d\n", n);
        n--;
    }
    return 0;
}
