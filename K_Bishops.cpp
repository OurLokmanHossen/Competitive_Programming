#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;

    int caseNO = 1;
    while (t--) {

        ll a, b , c, d;
        cin >> a >> b >> c >> d;

        cout << "Case " << caseNO++ << ": ";

        if((a + b) % 2 != (c + d) % 2) cout << "impossible" << endl;
        
        else if(abs(a - c) == (abs(b-d))) cout << 1 << endl;
        else cout << 2 << endl;

        
    }
    
    return 0;
}
