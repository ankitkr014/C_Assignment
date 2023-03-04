/*** W.A.P to find the greatest element in array of size 10 ***/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[10], max = A[0];
    printf("Enter the elements in array ");
    for (int i = 1; i < 10; i++)
        scanf("%d", &A[i]);
    for (int i = 1; i < 10; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    printf("Maximum no. is = %d", max);
    return 0;
}