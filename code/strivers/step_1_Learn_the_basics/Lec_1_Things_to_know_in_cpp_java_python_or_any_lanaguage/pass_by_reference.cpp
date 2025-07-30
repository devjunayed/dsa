#include<bits/stdc++.h>
using namespace std;

// here value is passed and modified but original not remain same (which is called pass by reverence)
void doSomething(int &num1){
    cout << num1 << endl;
    num1+= 5;

    cout << num1 << endl;
    num1+= 5;
    cout << num1 << endl;
     
}

int main(){
    int num1 = 10;

    // sending a copy of the variable with reference
    doSomething(num1);

    // value don't remain same
    cout << num1 << endl;
    return 0;
}