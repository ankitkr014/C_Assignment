/********* C Program to  print digits & count digits in a given number **************/
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n, count, r;

//     printf("Enter a number :\n");
//     scanf("%d", &n);
//     while (n > 0)
//     {
//         r = n % 10;
//         printf("%d\n", r);
//         n = n / 10;
//         count++;
//     }
//     // printf("%d\n", r);
//     printf("Count=%d", count);
//     return 0;
// }

/******Method -2*******/
/** C  Program to count digits in a given number ****/
#include <stdio.h>

int main()
{
    int n, c = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        c++;
        n = n / 10;
    }
    printf("%d", c);

    return 0;
}
