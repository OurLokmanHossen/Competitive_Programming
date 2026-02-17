#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) 
    {

           ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i <  n; i++) 
    {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
    a.resize(unique(a.begin(), a.end()) - a.begin());

    ll ans = 0;
    for (ll i = 0; i < n; i++) 
    {
        ll r = lower_bound(a.begin(), a.end(), n + a[i]) - a.begin() - i;
        ans = max(ans, r);
    }
    cout << ans << '\n';
        
    }
    
    return 0;
}
