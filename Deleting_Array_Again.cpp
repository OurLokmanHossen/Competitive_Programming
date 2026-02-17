#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<int> a(n), c(n);

        for(int i = 0; i<n; i++) cin  >> a[i];
        for(int i = 0; i<n; i++) cin  >> c[i];

        int cost = 0;

        int mn = c[0];

        for(int i = 0; i<n; i++)
        {
            mn = min(mn, c[i]);
            cost += a[i] * mn;
        }

        cout << cost << endl;
        
    }
    
    return 0;
}
