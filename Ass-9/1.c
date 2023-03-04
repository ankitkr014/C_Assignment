/************* Write a function to calculate area of circle (TSRS)*/

#include <stdio.h>
float area_circle(float);
int main()
{
    float r;
    printf("Enter the value of radius:");
    scanf("%f", &r);
    printf("Area of circle =%f", area_circle(r)); // printf() ke andar hmne area() fn ko call kar diya hai

    return 0;
}

float area_circle(float x) // function definition
{
    float area = 3.14 * x * x;
    return (area);
}