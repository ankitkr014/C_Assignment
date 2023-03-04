#include <stdio.h>
int main()
{
    int a[10], s_o = 0, s_e = 0;
    printf("Enter the ten numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
            s_e = s_e + a[i];
        else
            s_o = s_o + a[i];
    }
    printf("\nSum of all even nos.=%d", s_e);
    printf("\nSum of all odd nos.=%d", s_o);
    return 0;
}
