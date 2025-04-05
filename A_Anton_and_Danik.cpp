#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    string s; cin >> s;

    int cntA = 0, cntB = 0 ; 
    for(char c : s){
        if(c == 'A') cntA++;
        else if(c == 'D') cntB++;
    }

    if(cntA > cntB) cout << "Anton\n" ;
    else if(cntA < cntB) cout << "Danik\n" ;
    else cout << "Friendship\n" ;

    return 0;
}