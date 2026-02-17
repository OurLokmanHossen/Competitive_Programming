#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
     ll n , m , k;
     cin >> n >> m >> k;
        vector<ll> a(n);
        vector<ll> b(m); 
        for(ll i = 0 ; i<n; i++) cin >> a[i];   
        for(ll i = 0 ; i<m; i++) cin >> b[i];
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0, ans = 0;

        while( i < n && j <m)
        {
            if( b[j] > a[i] + k) i++;
            else if( b[j] < a[i] - k) j++; 
            else {
                ans++;
                i++;
                j++;
            }
        }

        cout << ans << endl;

    
    return 0;
}
