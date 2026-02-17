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

        for(ll i = 0; i<n; i++) cin >> a[i];

        sort(a.rbegin(), a.rend());

        ll maxi = 0;

        if( n % 2 == 0)
        {
            for(ll i = 0; i< n; i = i+2)
        {
           maxi += a[i];
        }
        } else 
        {
            for(int i = 0; i<n-1; i = i+2)
            {
                maxi += a[i];
            }
            maxi += a[n-1];
        }

        
        cout << maxi << endl;
        
    }
    
    return 0;
}
