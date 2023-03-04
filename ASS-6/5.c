/***Write a program to check whether two given numbers are co-Prime or not *********/
/********* Co-prime no- Two nos. are said to be co-prime if they have hcf=1*/

#include <stdio.h>
int main()
{
    int a, b, gcd; // hmm phle hii assume krke chal rhe hai ki a is our dividend & b is our divisor or we can say that b is smaller number & a is bigger number
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    for (gcd = a < b ? a : b; gcd >= 1; gcd--)
        if (a % gcd == 0 && b % gcd == 0)
            break;
    printf("gcd = %d\n", gcd);
    if (gcd == 1)
        printf("The %d & %d are co-prime numbers ", a, b);
    return 0;
}