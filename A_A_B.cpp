#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
        
       string s; cin >> s;

       int a = s[0] - '0';
       int b = s[2] - '0';

    cout << (a + b )<< endl;
    }
    
    return 0;
}
