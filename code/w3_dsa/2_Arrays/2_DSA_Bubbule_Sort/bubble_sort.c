#include<stdio.h>
int main(){
    int my_array[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int size = sizeof(my_array) / sizeof(my_array[0]);

    for (int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(my_array[j] > my_array[j+1]){
                int temp = my_array[j];
                my_array[j] = my_array[j + 1];
                my_array[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: \n");
    for(int i = 0; i < size; i++){
        printf("%d ", my_array[i]);

    }
    return 0;
}