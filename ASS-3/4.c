/************W.A.P to check whether a given number is odd or even w/o using % operator **************/
/******************************* 1st method (using '/','*') *******************/
// #include <stdio.h>
// #include <stdlib.h>
// int main()
//{int num;
//     printf("Enter a number:-\n");
//     scanf("%d",&num);
//     if(num/2*2==num)
//         printf("Even number");
//     else
//         printf("Odd number");
//     return 0;
// }

/**************************2nd method (using bitwise & operator) ***********************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Enter a number:-\n");
    scanf("%d", &num);
    if (num & 1)
        printf("Odd number");
    else
        printf("Even number");
    return 0;
}