#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i<n; i++) cin >> a[i];
        
        int s = 0;
        
        for(int i = 0; i<n; i++)
        {
            s += a[i];
        }
        
       if( s > 0) cout << 0 << endl;
       else cout << << endl;
        
        
    }
    
    return 0;
}
