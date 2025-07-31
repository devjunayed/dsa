#include<stdio.h>
int main()
{
    int prev2 = 0;
    int prev1 = 1;

    for(int i = 0; i < 18 ; i++){
        int newFibo = prev1 + prev2;
        printf("%d\n", newFibo);
        prev2 = prev1;
        prev1 = newFibo;
    }
    return 0;
}