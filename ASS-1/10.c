#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, avg;
    printf("Enter the value of a,b,c\n");
    scanf("%f%f%f", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("Average=%f", avg);
    return 0;
}
