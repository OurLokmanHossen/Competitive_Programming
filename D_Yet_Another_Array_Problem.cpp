#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

  int main() {
    fastio();
    
    ll t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        vector<ll> a(n);

        int even = 0, odd = 0;

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if (a[i] % 2 == 0) even++;
            else odd++;
        }

        if (odd > 0) 
        {
            cout << 2 << endl;
            continue;
        }

        ll ans = -1;
        for (ll x = 2; x <= 100; x++) 
        {
            bool ok = false;
            for (int i = 0; i < n; i++) 
            {
                if (__gcd(a[i], x) == 1) 
                {
                    ans = x;
                    ok = true;
                    break;
                }
            }
            if (ok) break;
        }

        cout << ans << endl;
        
    }
    
    return 0;
}
