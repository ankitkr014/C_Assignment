// W.A.P to check whether a given no. is divisible by 5 or not
// #include <stdio.h>
// #include <stdlib.h>
// int main()
//{int num;
//     printf("Enter a number:\n");
//     scanf("%d",&num);
//     if(num%5==0)
//         printf("Divisible by 5");
//     else
//         printf("Not divisible by 5");
//     return 0;
// }

#include <stdlib.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num % 5)
        printf("Not divisible by 5");
    else
        printf("Divisible by 5");
    return 0;
}
