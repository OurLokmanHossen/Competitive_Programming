#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s; cin >> s;
    
    for(char &c : s)
    {
        c = tolower(c);
    }
 
    cout << s << endl;



    return 0;
}