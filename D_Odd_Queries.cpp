#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, q; cin >> n >> q;
        vector<int> a(n+1);
        
        for(int i = 1; i<=n; i++) cin >> a[i];

        while(q--)
        {
            int l, r, k; cin >> l >> r >> k;

            int s = 0;

            for(int i = l; i<=r; i++)
            {
              a[i] = k;

              s += a[i];     
              
            }

            if(s % 2 == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        
    }
    
    return 0;
}
