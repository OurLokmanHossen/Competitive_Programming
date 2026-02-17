#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

        vector<ll> a(n), b(n);

        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<n; i++) cin >> b[i];

        ll minA = *min_element(a.begin(), a.end());
        ll minB = *min_element(b.begin(), b.end());

        ll moves = 0 ;

        for(int i = 0; i<n; i++)
        {
            moves += max(a[i] - minA, b[i] - minB);
        }

        cout << moves << endl;

        
    }
    
    return 0;
}
