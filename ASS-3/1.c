// W.A.P to program to check whether a given number is positive or non-positive

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num > 0)
        printf("+ve number");
    if (num <= 0)
        printf("\n Non +ve number");
    return 0;
}
