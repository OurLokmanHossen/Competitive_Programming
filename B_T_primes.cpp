#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0 ; i<n; i++) cin >> a[i];

    for(ll i = 0; i<n; i++)
    {
         ll r = sqrt(a[i]);

         bool found = true;
         if( r < 2) found = false;
         for(ll j = 2; j * j <= r; j++)
         {
           if( r % j == 0)
           {
             found = false;
             break;
           }
         }

         if( r * r == a[i] && found) 
         cout << "YES\n";
         else cout << "NO\n";
    }
    

    return 0;
}
