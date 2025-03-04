#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;

    string ans = "";

    for(int i = 0; i < x.size(); i++) {
        char ch = x[i];
        int y = ch - '0';
        int invertedValue = 9 - y;

        ans += min(invertedValue, y) + '0';
    }

    if(ans[0] == '0') {
        ans[0] = '9';
    }
    
    cout << ans << endl;

    return 0;
}
