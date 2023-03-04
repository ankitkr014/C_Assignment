#include <stdio.h>
#include <stdlib.h>
// C program to calculate area of circle & taking radius from user
int main()
{
    float rad, area;
    const float pi = 3.14;
    printf("Enter the radius of circle:\n");
    scanf("%f", &rad);
    area = pi * rad * rad;
    printf("Area of circle=%f", area);
    return 0;
}
