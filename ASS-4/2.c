// W.A.P to print first 10 natural numbers in reverse order
// #include <stdio.h>
// #include <stdlib.h>
//
// int main()
//{int i=1;
// while(i<=10)
//{
//     printf("%d\n",11-i);
//     i++;
// }
//
//     return 0;
// }
/*************************** 2nd Method ******************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }

    return 0;
}