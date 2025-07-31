#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Junayed";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a'){
            continue;
        }
        cout << s[i];
    }
    return 0;
}