#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    ll n,t; cin >> n >> t;
    ll a[n];

    for(int i = 0; i<n ; i++) cin >> a[i];

    ll cnt = 0;

    ll s = 0;

    ll j = 0;

    for(int i = 0; i<n; i++)
    {
        s += a[i];

        if(s <= t)
        {
            cnt++;
        }
        else 
        {
            s -= a[j];
            j++;
        }
    }

    cout << cnt << endl;
    
    return 0;
}
