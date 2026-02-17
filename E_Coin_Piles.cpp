#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    ll t ; cin >> t;
    while (t--) {

        ll a, b; cin >> a >> b;

        if((a + b) % 3 == 0) cout << "YES" << endl;\
        else cout << "NO" << endl;
        
    }
    
    return 0;
}
