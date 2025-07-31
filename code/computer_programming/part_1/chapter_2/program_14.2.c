#include <stdio.h>
int main()
{
    double num1, num2, sum, sub, mul, div;
    printf("Please enter a number: ");
    scanf("%lf", &num1);
    printf("Please enter another number:");
    scanf("%lf", &num2);
    
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("%lf + %lf = %lf\n", num1, num2, sum);
    printf("%lf - %lf = %lf\n", num1, num2, sub);
    printf("%lf * %lf = %lf\n", num1, num2, mul);
    printf("%lf / %lf = %lf\n", num1, num2, div);
    return 0;
}