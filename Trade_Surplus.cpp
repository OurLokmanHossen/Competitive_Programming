#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int a, b, c , d; cin >> a >> b >> c >> d;

        int exp = a- b;
        int imp = c - d;
        int netEI = exp + imp;

        if(netEI < 0 ) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
    return 0;
}
