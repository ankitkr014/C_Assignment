// W.A.P to print first ten even natural numbers
//  C Program to Print First 10 Even Natural Numbers Using While Loop
#include <stdio.h>
int main()
{
    int i = 1;

    // Displaying output
    printf("The First 10 Even Natural Numbers are: \n");
    while (i <= 10)
    {
        printf("%d \t", 2 * i);
        i++;
    }
    return 0;
}
