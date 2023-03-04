// C Program to print all prime numbers under 100
// #include <stdio.h>
// #include <stdlib.h>
//
// int main()
//{int n,i,count;
//     printf("All prime number from 1 to 100 are: \n");
//   for(n=1;n<=100;n++)
//     {
//        count=0;
//        for(int i=1;i<=n;i++)
//        {
//         if(n%i==0)
//         {
//             count++;
//         }
//        }
//             if(count==2)
//             {
//                 printf("%5d",n);
//             }
//     }
//       else
//         printf("Not a prime no");

//    return 0;
//}

/*********************Write a program to print all prime numbers under 100 *********/
#include <stdio.h>
#include <math.h>
// int main()
// {
//     int i = 2; // i ko check karna hai prime or not

//     for (; i < 100; i++)
//     {
//         int div;
//         for (div = 2; div <= i / 2; div++)
//         {
//             if (i % div == 0)
//                 break;
//         }
//         if (div > i / 2)
//             printf("%d ", i);
//     }
//     return 0;
// }

// int main()
// {
//     int i = 2; // i ko check karna hai prime or not

//     for (; i < 100; i++)
//     {
//         int div;
//         for (div = 2; div <= sqrt(i); div++)
//         {
//             if (i % div == 0)
//                 break;
//         }
//         if (div > sqrt(i))
//             printf("%d ", i);
//     }
//     return 0;
// }

// int main()
// {
//     int a, b;
//     scanf("%d%d", &a, &b); // a ko check karna hai prime or not
//     for (; a <= b; a++)
//     {
//         int div;
//         for (div = 2; div <= sqrt(a); div++)
//         {
//             if (a % div == 0)
//                 break;
//         }
//         if (div > sqrt(a))
//             printf("%d ", a);
//     }
//     return 0;
// }

int main()
{
    int n, count = 0, num = 2, div;
    scanf("%d", &n);
    while (count < n)
    {
        for (div = 2; div <= sqrt(num); div++)
        {
            if (num % div == 0)
                break;
        }
        if (div > sqrt(num))
        {
            printf("%d ", num);
            count++;
        }

        num++;
    }
    return 0;
}
