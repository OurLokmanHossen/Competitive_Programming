#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    ll t ; cin >> t;

    ll caseNO = 1;

    while (t--) {

        ll n , c; cin >> n >> c;

        cout << "Case " << caseNO++ << ": ";


        if(n == 0) cout << 0 << endl;
        else 
        {
            ll ans = c / (n * 2);
            cout << ans << endl;
        }

        
    }
    
    return 0;
}
