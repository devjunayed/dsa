#include<stdio.h>
int main()
{
    int s, t, v;

    printf("Enter the value of t: ");
    scanf("%d", &t);

    printf("Enter the value of v: ");
    scanf("%d", &v);

    s = 2 * t * v;

    printf("s : %d", s);

    return 0;
}