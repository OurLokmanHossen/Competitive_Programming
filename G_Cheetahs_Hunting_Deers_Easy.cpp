#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);

        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<m; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int cnt = 0;

        for(int i = 0; i<min(n,m); i++)
        {
            if(a[i]> b[i]) cnt++;
        }

        if(cnt >= n) cout << "Yes" << endl;
        else cout << "No" << endl;

        
    }
    
    return 0;
}
