/****************** Write a c program to print all factors of a given number *******/

#include <stdio.h>
int main()
{
    int input, i; // variable declaration

    // Input from user
    printf("Enter the input number ");
    scanf("%d", &input);

    // logic
    for (i = 1; i <= input / 2; i++)
        if (input % i == 0)
            printf("%d ", i);
    return 0;
}