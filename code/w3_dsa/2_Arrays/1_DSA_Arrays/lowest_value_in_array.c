// Algorithm
/**
 * 1. Create a variable 'minVal' and set it equal to the first value of the array.
 * 2. Go through every element in the array.
 * 3. If the current element has a lower value than 'minVal', update 'minVal' to this value.
 * 4. After looking at all the elements in the array, the 'minVal' variable now contains the lowest value.
 */

/**
    Variable 'minVal' = array[0]
    For each element in the array
    If current element < minVal
        minVal = current element
 */

 #include<stdio.h>
 int main(){
    int my_array[5] = {7, 12, 9, 4, 11};
    int minVal = my_array[0];
    int size = sizeof(my_array)/sizeof(my_array[0]);

    for(int i = 0; i < size; i++){
        if(my_array[i] < minVal){
            minVal = my_array[i];
        }
    }

    printf("%d", minVal);
    return 0;
 }