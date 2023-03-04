////W.A.P in C to check whether a given number is even or odd
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number");
    return 0;
}
/****************************** 2nd Method ***********************/
// #include <stdio.h>
// #include <stdlib.h>
//
// int main()
//{int num;
//     printf("Enter a number:\n");
//     scanf("%d",&num);
//     if(num%2)
//     printf("Odd number\n");
//     else
//         printf("Even number");
//     return 0;
// }
