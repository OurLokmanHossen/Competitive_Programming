#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, m , x , y; cin >> n >> m >> x >> y;

        int a[n];
        int b[m];

        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<m; i++) cin >> b[i];

        cout << n + m << endl;
        
    }
    
    return 0;
}
