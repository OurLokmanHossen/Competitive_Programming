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

        bool f = true;

        for(int i = 0; i<n; i++)
        {
            if((i+1) % 2 != a[i] % 2)
            {
                f = false;
                break;
            }
        }

        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
    return 0;
}
