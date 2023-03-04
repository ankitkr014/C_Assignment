/*** Ass11.5  W.A.P to find the smallest element in array of size 10 ***/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[10], smallest;
    printf("Enter the elements in array ");
    for (int i = 1; i < 10; i++) // read 10 elements in an array
        scanf("%d", &A[i]);
    smallest = A[0]; // Consider first element as smallest
    for (int i = 1; i < 10; i++)
    {
        if (A[i] < smallest)
            smallest = A[i];
    }
    printf("Smallest element is = %d", smallest);
    return 0;
}
