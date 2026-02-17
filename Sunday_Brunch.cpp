#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int x, y; cin >> x >> y;
       
        int res = x / y;

        if (res > 20) cout << 20 << endl;
        else cout << res << endl;

        
    }
    
    return 0;
}
