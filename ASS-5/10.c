// C program to find Nth term of fibonacci series
/******
That is,
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.

Given N, calculate F(N).

Example 1:
Input:n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1
******/
#include <stdio.h>
int main()
{
    int a = -1, b = 1, n;
    int c;
    printf("Enter a number of term ");
    scanf("%d", &n);
    while (n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%5d", c);
    return 0;
}