#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;
        vector<ll> a(n);

        for(int i = 0 ; i<n; i++) cin >> a[i];

        ll mx = 0, ans = 0;
        
        for(int i = 0; i<n; i++)
        {
            mx = max(mx, a[i]);

            if(mx > a[i])
                ans++;
        }

        cout << ans << endl;
       
        
    }
    
    return 0;
}
