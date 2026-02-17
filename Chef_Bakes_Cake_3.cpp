#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        int a[n];

        for(int i = 0; i<n; i++) cin >> a[i];

        int s = 0;
        int mx = 0;

        for(int x = 1 ; x <= 100; x++)
        {
            int p = 0;

            for(int i = 0; i<n; i++)
          {
         
            s = min(a[i],x);
            
            p += (50 * s) - (30 * x);

          }
          mx = max(p, mx);
        }

        cout << mx << endl;
        
    }
    
    return 0;
}
