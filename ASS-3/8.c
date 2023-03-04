// W.A.P to find greater among two numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter two numbers:  ");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("%d is greater\n", a);
    else if (b > a)
        printf("%d is greater\n", b);
    else
        printf("Both are equal");
    return 0;
}