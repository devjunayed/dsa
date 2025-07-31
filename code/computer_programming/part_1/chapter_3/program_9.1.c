#include<stdio.h>
int main(){
    int number = 33, divide, remaining;

    divide = number /2;
    remaining = number - (divide*2);

    if(!remaining){
        printf("The number is even\n");
    }else{
        printf("The number is odd\n");
    }
    return 0;
}