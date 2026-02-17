#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int a, b, c;
        cin  >> a >> b >> c;

        int mi = min({a, b, c});

        int ans = mi * 10;

        int x = a - mi;
        int y = b - mi;
        int z = c - mi;

        cout << ans + x * 3 + y * 3 + z * 3 << endl;
        
    }
    
    return 0;
}
