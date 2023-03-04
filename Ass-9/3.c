/**Write a program to print first n natural number ****/
/* i/p: n=4
    o/p: 1 2 3 4 */

#include <stdio.h>
void printnum(int);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printnum(n);
    return 0;
}
void printnum(int a)
{
    for (int i = 1; i <= a; i++)
    {
        printf("%d ", i);
    }
}
