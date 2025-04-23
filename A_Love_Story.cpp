#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >> t;
    while(t--){
        string s; cin >> s;
        string b = "codeforces";

        int dif = 0;

        for(int i = 0 ; i < s.size(); i++)
        {
            if(s[i] != b[i] )
            dif++;
        }
        cout << dif << endl;
    }

    return 0;
}