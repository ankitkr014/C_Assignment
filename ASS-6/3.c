/************** Write a program to print all prime numbers between two given numbers *********/
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int u, div, x;
//     printf("Enter two numbers ");
//     scanf("%d%d", &x, &u);
//     for (x; ++x < u;)
//     {
//         for (div = 2; div <= x / 2; div++)
//             if (x % div == 0)
//                 break;
//         if (div > x / 2)
//             printf("%d ", x);
//     }
//     return 0;
// }

/***************************** M-2***************/
#include <stdio.h>
#include <math.h>
int main()
{
    int u, div, x;
    printf("Enter two numbers ");
    scanf("%d%d", &x, &u);
    for (x; ++x < u;)
    {
        for (div = 2; div <= sqrt(x); div++)
            if (x % div == 0)
                break;
        if (div > sqrt(x))
            printf("%d ", x);
    }
    return 0;
}
