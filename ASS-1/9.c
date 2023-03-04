#include <stdio.h>
#include <stdlib.h>
// C program to calculate simple interest
int main()
{
    float p, r, t, si;
    printf("Enter the value of p,r,t:\n");
    scanf("%f%f%f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("Simple Interest=%f", si);
    return 0;
}
