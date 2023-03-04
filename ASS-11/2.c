/*** Ass 11.2 W.A.P to calculate sum of 10 nos. stored in an array***/
#include <stdio.h>
int main()
{
    int a[10], sum = 0;
    float avg;
    printf("Enter the ten numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 10; i++)
        sum = sum + a[i];
    printf("Sum of 10 nos.=%d", sum);
    return 0;
}
