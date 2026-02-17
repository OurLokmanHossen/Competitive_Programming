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

        for(int i = 1; i<=n; i++) cin >> a[i];

        int ans = 0;

        for(int i = 1; i<=n; i++)
        {
            ans = __gcd(ans, abs(a[i]-i));
        }

        cout << ans << endl;
        
    }
    
    return 0;
}
