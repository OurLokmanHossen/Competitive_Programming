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

            int min_di = INT_MAX;

            for(int i = 0; i<n-1; i++)
            {

                int dif = (a[i+1]- a[i]);

               min_di = min(dif,min_di);
            }

           if(min_di < 0) cout << 0 << endl;
           else cout << min_di / 2 + 1 << endl;

      
        
    }
    
    return 0;
}
