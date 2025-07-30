#include<bits/stdc++.h>
using namespace std;

// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readablilty
// Functions are used to same code multiple time
// void -> which does not returns anything
// return
// parameterised
// no parameteriesed

void writeName(string name){
    cout << "Hey," <<  name;
}

int main(){
    string name;
    cin >> name;

    writeName(name);
    return 0;
}