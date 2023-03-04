/******** W.A.P in c to print table of user's choice  *************/
/****************** 1st method ****************/
// #include <stdio.h>
// #include <stdlib.h>
//
// int main()
//{int n,i;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(i=1;i<=10;i++)
//     {
//         printf("%d*%d=%d\n",n,i,n*i);
//     }
//     return 0;
// }

/******************** 2nd Method ******************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (count <= 10)
    {
        printf("%d*%d=%d\n", n, count, n * count);
        count++;
    }
    return 0;
}
