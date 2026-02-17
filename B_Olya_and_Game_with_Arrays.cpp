#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    ll t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

        vector<ll> secl;
        vector<ll> min;

        while(n--)
        {
            ll m; cin >> m;

            vector<ll> a(m);

            for(ll i = 0; i < m; i++)
            {
                cin >> a[i];
            }

            sort(a.begin(), a.end());
            
            min.push_back(a[0]);
            secl.push_back(a[1]);
           

        }

         // for(auto &x : secl)
        // {
        //      cout << x << " ";
        // }
        // cout << endl;

        // for(auto &x : min)
        // {
        //      cout << x << " ";
        // }

        // cout << endl;

        sort(secl.begin(), secl.end());
        sort(min.begin(), min.end());


        ll ans = 0;

        for(ll i = 1; i<secl.size(); i++)
        {
          ans += secl[i]; // skip the lowest second minimum
        }

        cout << ans + min[0] << endl;


        
        
    }
    
    return 0;
}
