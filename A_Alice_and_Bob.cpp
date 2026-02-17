#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    ll t ; cin >> t;
    while (t--) {

        ll n, a ; cin >> n >> a;

        vector<ll> v(n);

        ll aa = 0, bb = 0;
        
        for(ll i = 0 ; i<n; i++)
        {
            cin >> v[i];

            if(v[i] > a) aa++;
            else if(v[i] < a) bb++;

        }

        if(aa > bb) cout << a+1 << endl;
        else cout << a-1 << endl;
    
    }
    
    return 0;
}
