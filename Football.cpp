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

        int mx = 0;

        for(int i = 0; i<n; i++)
        {
            mx = max(a[i] * 20  - b[i] * 10, mx);
        }

        cout << mx << endl;
        
    }
    
    return 0;
}
