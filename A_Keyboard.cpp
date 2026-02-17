#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    string c, s;
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";

    cin >> c >> s;
    int ch = 0;
    if (c == "R") ch = -1;
    else ch = 1;

    for (int i = 0; i < s.size(); i++) {
        int pos = s1.find(s[i]);
        cout << s1[pos + ch];
    }

    cout << endl;
    
    return 0;
}
