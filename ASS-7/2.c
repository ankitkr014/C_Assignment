/**************** Q-2.

****
  ***
    **
      *
                *******/
// space<row i.e space=n-i
//  star=n-i+1

#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter the no. of rows ");
    scanf("%d", &n);
    while (i <= n)
    {
        int j = 1, space = 1;
        while (space < i)
        {
            printf(" ");
            space++;
        }
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