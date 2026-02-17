#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, s, x; cin >> n >> s >> x;

        vector<int> a(n);

        for(int i = 0; i<n; i++) cin >> a[i];

        int sum = 0;

        for(int i = 0; i<n; i++)
        {
            sum += a[i];     
        }

        int res = s - sum;

        if(sum <= s && res % x == 0) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    
    return 0;
}
