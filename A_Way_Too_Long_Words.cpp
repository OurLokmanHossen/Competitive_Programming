#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        if(s.size()>10)
        {
            cout << s[0] << s.size()-2 << s.back() << endl;

            // s.back() = s[s.size()-1] last character of strins s
        }
        else 
        cout << s << endl;
    }
    return 0;
}