#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

        ll ans = 0;

        ll i = 1;

        while(n%i == 0)
        {
            ans++;
            i++;
        }

        cout << ans << endl;
        
    }
    
    return 0;
}
