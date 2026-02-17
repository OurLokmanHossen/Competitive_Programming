#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n, k, q; cin >> n >> k >> q;

        ll a[n];

        for(ll i = 0; i<n; i++)
        {
             cin >> a[i];

            a[i] =  (a[i] > q) ? 0 : 1 ;
        }

        ll cnt1 = 0; 
        ll ways = 0;

        for(ll i = 0; i<n; i++)
        {
            if(a[i] == 1) cnt1++;
            else 
            {
                if(cnt1 >= k)
                {
                    ll dif = cnt1 - k + 1;
                    ways += (dif * (dif + 1)) / 2 ;
                }
                cnt1 = 0;
            }
        }

         if(cnt1 >= k)
                {
                    ll dif = cnt1 - k + 1;
                    ways += (dif * (dif + 1)) / 2 ;
                }

                cout << ways << endl;
        
    }
    
    return 0;
}
