#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
        
        ll n, m; cin >> n >> m;

        vector<ll> a(n);

        for(int i = 0; i<n; i++) cin >> a[i];

         sort(a.rbegin(), a.rend());

        ll maxi = 0;

        for(ll i = 0; i<n; i++)
        {
           ll mal = max(0LL, m-i);

           maxi += a[i] * mal ;


        }

        cout << maxi << endl;
    }
    
    return 0;
}
