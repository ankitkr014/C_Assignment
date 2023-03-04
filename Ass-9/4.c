/****Program to print first N even natural number  ******/
/*i/p: n=4
   o/p: 2 4 6 8 */

#include <stdio.h>
void printeven(int);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printeven(n);
    return 0;
}

void printeven(int a)
{
    for (int i = 1; i <= a; i++)
    {
        printf("%d ", 2 * i);
    }
}