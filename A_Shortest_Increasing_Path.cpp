#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
        ll x, y; cin >> x >> y;

        if (y == 1) { 
            cout << -1 << endl; continue;
        }
        
        if( y > x) cout << 2 << endl;
        else 
        {
            if( abs(x-y) >= 2) cout << 3 << endl;
            else cout << -1 << endl;
        }
        
    }
    
    return 0;
}
