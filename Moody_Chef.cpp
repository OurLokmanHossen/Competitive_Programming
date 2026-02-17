#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, l , r; cin >> n >> l >> r;

        int a[n];

        for(int i = 0; i<n; i++) cin >> a[i];

        int hap = 0;

        int mx = 0, mi = 0;

        for(int i = 0; i<n; i++)
       {
           if(a[i] >= l && a[i] <= r)
           {
              hap++;
              mx = max(mx,hap);
           }
           else 
           {
            hap--;
            mi = min(mi, hap);
           }

       }

       cout << mx << " " << mi << endl;

        
    }
    
    return 0;
}
