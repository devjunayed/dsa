#include <iostream>
using namespace std;
#include "../headers/test.h"  // include the matching header

void test(int t, void (*pattern)(int))
{
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << "Test Case " << i + 1 << ": For value " << n << endl << endl;
        pattern(n);
        cout << endl;
    }
}
