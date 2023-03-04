// Write a C program to swap values of two int variables without using third variable.
/******************************* 1st method(using '+','-') *****************************/

#include <stdio.h>
#include <stdlib.h>

// int main()
//{int a,b;
// printf("Enter the value of a & b:\n");
// scanf("%d%d",&a,&b);
// a=a+b;
// b=a-b;
// a=a-b;
//     printf("\n a=%d b=%d",a,b);
//     return 0;
// }

/*********************************** 2nd Method(using 'x','/') ******************************/
// #include <stdio.h>
// #include <stdlib.h>
//
// int main()
//{int a,b;
// printf("Enter the value of a & b:\n");
// scanf("%d%d",&a,&b);
// a=a*b;
// b=a/b;
// a=a/b;
//     printf("\n a=%d b=%d",a,b);
//     return 0;
// }

/*********************************** 3rd Method(using '^'xor operation) ******************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter the value of a & b:\n");
    scanf("%d%d", &a, &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\n a=%d b=%d", a, b);
    return 0;
}
