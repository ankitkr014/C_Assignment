// W.A.P to input a character from keyboard & print its ASCII code in C language
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    printf("The ASCII code of %c=%d", ch, ch);
    return 0;
}
