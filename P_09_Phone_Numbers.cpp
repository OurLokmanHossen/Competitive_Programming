#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    string s; cin >> s;

    int cnt_8 = 0;

    for(char c : s)
       {
            if(c == '8') cnt_8++;
       }

    //    cout << min(cnt_8, n/11) << endl;

    if(cnt_8 == 0) cout << 0 << endl;
    else cout << n/11 << endl;

    return 0;
}