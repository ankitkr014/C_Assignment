// C Program to find greatest among three number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    printf("Enter the value of x,y,z:- ");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y)
    {
        if (x > z)
            printf("%d", x);
        else
            printf("%d", z);
    }
    else
    {
        if (y > z)
            printf("%d\n", y);
        else
            printf("%d", z);
    }
    return 0;
}
