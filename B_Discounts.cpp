#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n, k; cin >> n >> k;
        vector<ll> a(n), b(k);

       ll sum = 0;

        for(ll i = 0; i<n; i++) 
        {
            cin >> a[i];
            sum += a[i];
        }

        for(ll i = 0; i<k; i++) cin >> b[i];

        sort(a.rbegin(), a.rend());
        sort(b.begin(),b.end());

        ll group = 0;

        for(int i = 0; i<k; i++)
        {
          group += b[i];

          if(group > n) break;

          sum -= a[group-1];
        }

        cout << sum << endl;  
    
        
    }
    
    return 0;
}
