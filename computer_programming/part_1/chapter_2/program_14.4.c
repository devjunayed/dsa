#include <stdio.h>
int main()
{
    int num1, num2, sum, sub, mul, div;
    char signSum = '+', signSub = '-', signMul = '*', signDiv ='/';
    printf("Please enter a number: ");
    scanf("%d", &num1);
    printf("Please enter another number:");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("%d %c %d = %d\n", num1, signSum, num2, sum);
    printf("%d %c %d = %d\n", num1, signSub, num2, sub);
    printf("%d %c %d = %d\n", num1, signMul, num2, mul);
    printf("%d %c %d = %d\n", num1, signDiv, num2, div);
    return 0;
}