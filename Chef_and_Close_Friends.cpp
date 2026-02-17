#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
        
        int x, y, z; cin >> x >> y >> z;

        int m = x - y;
        int p = x + y;

        int a = x - z;
        int b = x + z;

        int res = min(abs(m-p), abs(a-b));

        cout << res << endl;


    }
    
    return 0;
}
