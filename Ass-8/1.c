/****** Write a program which takes month number as an input and display number of days in that month**/
#include <stdio.h>

int main()
{
    int mth_no;
    printf("Enter the month number ");
    scanf("%d", &mth_no);
    switch (mth_no)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("\nFebruary");
        break;
    case 3:
        printf("\nMarch");
        break;
    case 4:
        printf("\nApril");
        break;
    case 5:
        printf("\nMay");
        break;
    case 6:
        printf("\nJune");
        break;
    case 7:
        printf("\nJuly");
        break;
    case 8:
        printf("\nAugust");
        break;
    case 9:
        printf("\nSeptember");
        break;
    case 10:
        printf("\nOctober");
        break;
    case 11:
        printf("\nNovember");
    case 12:
        printf("\nDecember");
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}