// W.A.P which takes marks of 5 subjects (assumed maximum marks for each subject is 100).Display result as pass or fail.Also print division obtained if candidate has passed the exam
#include <stdio.h>
#include <stdlib.h>
int main()
{ /* else if ladder demo */

    int m1, m2, m3, m4, m5, per;
    printf("Enter marks in five subjects ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    if (m1 > 90 && m1 <= 100)
        printf("First division\n");
    else if (m2 > 80 && m2 <= 90)
        printf("Second division\n");
    else if (m3 > 70 && m3 <= 80)
        printf("Third division\n");
    else if (m4 > 60 && m4 <= 70)
        printf("Fourth division\n");
    else if (m5 < 50)
        printf("Fourth division\n");
    else
        printf("Fail\n");

    return 0;
}
