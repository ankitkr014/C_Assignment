/****************       Q-1.
 ****
 ***
 **
 *                ********/

#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the no. of rows ");
    scanf("%d", &n);
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}