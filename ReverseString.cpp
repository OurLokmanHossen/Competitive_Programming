#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s ; cin >> s;
        
        int n = s.size();
        
        string rev = "";

        for(int i = n-1; i>=0; i--)
        {
            rev += s[i];
        }

        cout << rev << endl;
        
    return 0;
}