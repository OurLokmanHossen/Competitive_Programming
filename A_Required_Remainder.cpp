#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;

    while (t--) {

        ll x, y, n; cin >> x >> y >> n;

        
        ll q = (n - y) / x;  
        
        ll k = q * x + y;

        cout << k << endl;  
        
    }
    
    return 0;
}
