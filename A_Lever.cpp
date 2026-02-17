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
        int b[n];

        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<n; i++) cin >> b[i];

        int ans = 0;

        for(int i = 0; i<n; i++)
        {
            if(a[i] > b[i])
            {
                ans += a[i] - b[i];
            }
        }

        cout << ans + 1 << endl;

        
        
    }
    
    return 0;
}
