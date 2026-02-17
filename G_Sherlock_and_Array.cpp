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

        ll total = 0;

        for(int i = 0; i<n; i++) 
        {
            cin >> a[i];
            total += a[i];
        }
        
        ll l = 0;
        bool found = false;

        for(int i = 0; i<n; i++)
        {
          ll r = total - l - a[i];
          if(l == r) 
          {
            found = true;
            break;
          }
          l += a[i];
        }

        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
    return 0;
}
