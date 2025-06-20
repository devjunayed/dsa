#include <iostream>
using namespace std;

struct Rectangle{
    int length; // 4 byte
    int breadth; // 4 byte

    char x; // 1 byte for char but it will take 4 byte which will be known as padding
};

// also can decalre with definition lik this
// struct Rectangle{
//     int length;
//     int breadth;
// } r1, r2;

// also like this we can declarre
// struct Reactangle r1, r2, r3;


int main()
{
    struct Rectangle r1 = {10, 5}; // value initailization

    // reassigning values
    r1.length = 15;
    r1.breadth = 7;

    cout << sizeof(r1) << endl; // will output 8 byte
    cout << r1.length << endl;
    cout << r1.breadth << endl;

    cout << r1.length * r1.breadth << endl;
    return 0;
}