#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array Size: ";
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++){
        cout << A[i] << endl;;
    }

    return 0;
}