#include <stdio.h>
#include <stdlib.h>
// C program to calculate area of rectangle. Taking len & breadth from user
int main()
{
    float len, width, area;

    printf("Enter the length & width of rectangle:\n");
    scanf("%f%f", &len, &width);
    area = len * width;
    printf("Area of rectangle=%f", area);
    return 0;
}
