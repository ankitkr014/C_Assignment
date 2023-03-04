/********Write  a c program to print all prime factors of a given number **********/
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
        { // logic to check for prime number
            int j, count = 0;
            for (j = 1; j <= i; j++)
                if (i % j == 0)
                    count++;
            if (count == 2)
                printf("%d ", i);
        }

    return 0;
}