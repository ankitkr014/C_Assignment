// W.A.P to print last digit of a given number=% operator(modulus operator)
/************************ 1st method *****************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, a;
    printf("Enter a number:\n");
    scanf("%d", &num);
    a = num % 10;
    //   num=n/10;
    //   num++;
    printf("%d", a);

    return 0;
}
/************* 2nd method ******************/
