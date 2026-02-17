#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main() {
    fastio();
    
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        
        for (int i = 0; i < n; i++)
            a[i] = max(a[i], b[i]);

        
        for (int i = n - 2; i >= 0; i--)
            if(a[i] < a[i+1]) a[i] = a[i+1];

       
        vector<long long> pref(n);
        
        pref[0] = a[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + a[i];

       
        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; r--;

            long long ans = pref[r] - (l > 0 ? pref[l - 1] : 0);
            cout << ans << " ";
        }
        cout << "\n";
    }

    return 0;
}
