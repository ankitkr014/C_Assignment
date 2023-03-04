// W.A.P to check whether a given number is +ve,-ve or zero

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
        printf("+ve number\n");
    else if (n < 0)
        printf("-ve number\n");
    else
        printf("Zero");
    return 0;
}