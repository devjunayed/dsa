#include<stdio.h>
int main()
{
    int A[5];
    int B[5] = {2, 4, 5, 8, 10};
    int i = 0;

    for(i = 0; i < 5; i++){
        printf("%d ", B[i]);
    }
    return 0;
}