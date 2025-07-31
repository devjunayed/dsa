#include<stdio.h>
#include <iostream>
using namespace std;


struct Rectangle{
    int length;
    int breadth;
};

int main(){
    //normal pointer
    // int a = 10;
    // int *p;
    // p = &a; 
    // cout << a << endl;

    // printf("using pointer %d %d", p, &a);

    //array and pointer
    // int A[5] = {2, 4, 6, 8, 10};
    // int *p;
    // p = A;
    

    // for(int i = 0; i < 5; i++)
    //     cout << p[i] << endl;
    

    //array in heap in c
    // int *p;
    // p = (int *) malloc(5*sizeof(int));

    // p[0] = 10;
    // p[1] = 15;
    // p[2] = 23;
    // p[3] = 32;
    // p[4] = 20;

    // for(int i = 0; i < 5; i++)
    //     cout << p[i] << endl;


    //array in heap in c++
    // int *p;
    // p = new int[5];

    // p[0] = 10;
    // p[1] = 15;
    // p[2] = 23;
    // p[3] = 32;
    // p[4] = 20;

    //  for(int i = 0; i < 5; i++)
    //     cout << p[i] << endl;

    //when dynamically allocating memory we have to release the memory when finished

    //for c++
    // delete [] p;

    //for c
    // free(p);


    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    return 0;
}