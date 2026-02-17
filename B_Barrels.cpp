#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;
        ll k; cin >> k;

        vector<ll> a(n);

        for(int i = 0; i<n ; i++) cin >> a[i];

        sort(a.rbegin(), a.rend());
        
        ll s = a[0];

        for(int i = 1; i<=k; i++)
        {
            s += a[i];
        }

        cout << s << endl;
        
    }
    
    return 0;
}
