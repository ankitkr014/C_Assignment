// W.A.P to print first N natural number in c language
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
