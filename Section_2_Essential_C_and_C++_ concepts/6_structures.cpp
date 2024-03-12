#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    //this will take 4 byte of memory instead of 1byte which is called padding of memory
    char x; 

};

int main()
{
    struct Rectangle r = {10, 5};

    cout << r.length * r.breadth << endl;

    cout << sizeof(r) << endl;
    return 0;
}