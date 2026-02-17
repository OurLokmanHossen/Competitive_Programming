#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<int>a(n+1);
        for(int i = 0; i<n+1; i++) cin >> a[i];

        int mn = INT_MAX;

        for(int i = 0; i<n; i++)
        {
            int mx = max(a[i], a[i+1]);
            mn = min(mx, mn);
            
        }

        cout << mn << endl;
        
    }
    
    return 0;
}
