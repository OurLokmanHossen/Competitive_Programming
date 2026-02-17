#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

        vector<ll> a(n);

        for(int i = 0; i<n; i++) cin >> a[i];

        vector<ll> even,odd;

        for(int i = 0; i<n; i++)
        {
            if(a[i] % 2 == 0) even.push_back(a[i]);
            else odd.push_back(a[i]);
        }

        if(odd.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }

        ll s = 0;

        for(int i = 0; i<even.size(); i++)
        {
            s += even[i];
        }

        sort(odd.rbegin(),odd.rend());

        ll len = (odd.size() + 1)/2;

        for(ll i = 0; i<len; i++)
        {
            s += odd[i];
        }

        cout << s << endl;

        
    }
    
    return 0;
}
