/ W.A.P in C to check whether an year is leap or not
// #include <stdio.h>
// #include <stdlib.h>
// int main()
//{int year;
//     printf("Enter year-\n");
//     scanf("%d",&year);
//     if(year%100==0)
//     {
//     if(year%400)
//         printf("Not a leap Year");
//     else
//         printf("Leap Year");
//     }
//     else
//     {
//     if(year%4)
//         printf("Not a leap Year");
//     else
//         printf("\nLeap year");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
//{int year;
//     printf("Enter year-\n");
//     scanf("%d",&year);
//     if(year%100)
//     {
//       if(year%4)
//         printf("Not a leap Year");
//     else
//         printf("\nLeap year");
//     }
//
//     else
//   {
//     if(year%400)
//         printf("Not a leap Year");
//     else
//         printf("Leap Year");
//     }
//     return 0;
// }
/**************************** 3rd method(Using conditional operator) ***********************/
#include <stdio.h>
#include <stdlib.h>
                                                 int
                                                 main()
{
    int year;
    printf("Enter year-\n");
    scanf("%d", &year);
    printf(year % 100 ? year % 4 ? "Not a leap Year" : "\nLeap year" : year % 400 ? "Not a leap Year"
                                                                                  : "Leap Year");
    return 0;
}