#include<stdio.h>
int main()
{
    double celsius, farenheit;
    printf("Enter the tempearature in celsius: ");
    scanf("%lf", &celsius);

    farenheit = 1.8 * celsius + 32;
    printf("Temperature in farenheit is: %lf\n", farenheit);
    return 0;
}