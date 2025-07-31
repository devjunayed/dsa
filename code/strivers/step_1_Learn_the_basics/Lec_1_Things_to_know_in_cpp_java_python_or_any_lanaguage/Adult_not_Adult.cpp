#include<iostream>
using namespace std;

//  Write a program that takes an input of age
// and prints if you are adult or not
// >= 18, yes
// <18 , no

int main(){
    int age;
    cin >> age;
    if(age >= 18){
        cout << "Adult" << endl;
    }else{
        cout << "Not Adult" << endl;
    }
    return 0;
}