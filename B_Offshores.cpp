#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, x, y; cin >> n >> x >> y;
        
        vector<int> a(n);

        for(int i = 0; i<n; i++) cin >> a[i];

        int total =0;

        int ans = 0;

        for(int i = 0; i<n; i++)
        {
            total += (a[i]/x) * y;

        }

        for(int i = 0; i<n; i++)
        {
             int last = a[i] + total - ((a[i]/x) * y);

             ans = max(ans, last);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
