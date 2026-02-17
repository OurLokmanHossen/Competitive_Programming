#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll x, y; cin >> x >> y;

        int s = x + y;

        if(x % 2 == 0) cout << "Bob" << endl;
        else cout << "Alice" << endl;

        
    }
    
    return 0;
}
