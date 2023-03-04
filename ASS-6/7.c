/*********Write a program to print lcm of two numbers ********** /
/****************************** M-1(Very less efficient)**********/
#include <stdio.h>
int main()
{
    int a, b, l;
    printf("Enter the value of a & b \n");
    scanf("%d%d", &a, &b);
    for (l = 1; l <= a * b; l++)
        if (l % a == 0 && l % b == 0)
            break;
    printf("LCM=%d", l);
    return 0;
}

/************************ M-2(better than M-1)**********/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, l;
//     cout << "Enter the value of a & b \n";
//     cin >> a >> b;
//     for (l = a > b ? a : b; l <= a * b; l++)
//         if (l % a == 0 && l % b == 0)
//             break;
//     printf("LCM=%d", l);

//     return 0;
// }

/****************************** M3(Best method)****************/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, l;
//     cout << "Enter the value of a & b \n";
//     cin >> a >> b;
//     for (l = a > b ? a : b; l <= a * b; l = l + (a > b ? a : b))
//         if (l % a == 0 && l % b == 0)
//             break;
//     printf("LCM=%d", l);

//     return 0;
// }