#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t; 
    cin >> t;

    while (t--) {

        ll b, g, x, y, n; 
        cin >> b >> g >> x >> y >> n;

        if (x + y > n) {
            cout << -1 << endl;
            continue;
        }

        int total = b + g;

        int room = (total + n - 1) / n; // total room

        if(x * room > b || y * room > g) cout << -1 << endl;
        else cout << room << endl;
        
    }

    return 0;
}
