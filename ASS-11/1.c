/***  Ass 11.1 W.A.P to calculate avg of ten numbers.Use arrays to store 10 numbers. ***/

#include <stdio.h>
int main()
{
    int a[10], sum = 0;
    float avg;
    printf("Enter the ten numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 10; i++)
    {
        sum = sum + a[i];
        avg = sum / 10.0;
    }
    printf("Average of ten nos.=%f", avg);
    return 0;
}

// /*** Ass 11.2 W.A.P to calculate sum of 10 nos. stored in an array***/
// //#include<stdio.h>
// //int main()
// //{int a[10],sum=0;
// //float avg;
// //    printf("Enter the ten numbers: ");
// //    for(int i=0;i<10;i++)
// //    scanf("%d", &a[i]);
// //     for(int i=0;i<10;i++)
// //  sum=sum+a[i];
// //   printf("Sum of 10 nos.=%d",sum);
// //   return 0;
// //}

// /*** Ass 11.3 W.A.P to calculate sum of all even & sum of all odd no. stored in an array of size 10 ***/
// #include<stdio.h>
// int main()
// {int a[10],s_o=0,s_e=0;
//     printf("Enter the ten numbers: ");
//     for(int i=0;i<10;i++)
//     scanf("%d", &a[i]);
//      for(int i=0;i<10;i++)
//         {
//             if(a[i]%2==0)
//         s_e=s_e+a[i];
//         else
//             s_o=s_o+a[i];
//         }
//    printf("\nSum of all even nos.=%d",s_e);
//    printf("\nSum of all odd nos.=%d",s_o);
//    return 0;
// }
