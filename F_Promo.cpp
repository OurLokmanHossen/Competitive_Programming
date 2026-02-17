#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());


    vector<ll> prefix(n); 

    prefix[0] = a[0];         

    for (ll i = 1; i < n; i++) 
    {
        prefix[i] = prefix[i - 1] + a[i]; 
    }

  

    while(q--)
    {
        ll x, y; cin >> x >> y;

        // -1 because 0 based index 0 1 2 3 4 5

        if(x == y) cout << prefix[x-1] << endl;

        else
        {
           
            cout << prefix[x-1] - prefix[x-y-1] << endl;
        } 
       
  
    }

    return 0;
}
