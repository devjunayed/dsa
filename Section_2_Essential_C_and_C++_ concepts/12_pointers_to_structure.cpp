#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};


int main(){

Rectangle *p;

p = (struct Rectangle *) malloc(sizeof(struct Rectangle));

p -> length = 69;
p -> breadth = 96;

cout << p -> length << endl;
cout << p -> breadth << endl;

return 0;

}