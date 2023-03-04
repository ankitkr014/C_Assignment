#include <stdio.h>
#include <stdlib.h>
// C program to calculate volume of cuboid
int main()
{
    float l, b, h, vol;
    scanf("%f%f%f", &l, &b, &h);
    vol = l * b * h;
    printf("Volume of cuboid=%f", vol);
    return 0;
}