#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        string s; 
        cin >> s;
        // cout << ((s == "bca" || s == "cab") ? "NO" : "YES") <<endl;
        
        if((s == "bca" || s == "cab"))
        cout <<  "NO" << endl;
        else 
        cout <<  "YES" << endl;
    }

    return 0;
}