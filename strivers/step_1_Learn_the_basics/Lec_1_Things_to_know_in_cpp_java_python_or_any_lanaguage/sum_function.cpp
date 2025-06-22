#include<bits/stdc++.h>
using namespace std;

// Take two numbers and print its sum using function


int sum (int a, int b){
    return a + b;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;

    int num3 = sum(num1, num2);
    cout << num3;

    return 0;
}