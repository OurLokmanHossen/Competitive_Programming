#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
  

        ll n ; cin >> n;

        ll a[n];

        ll s = n * (n+1) / 2;

        ll sum = 0;

        for(ll i = 0; i<n-1; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        cout << s - sum << endl;
        
  
    
    return 0;
}
