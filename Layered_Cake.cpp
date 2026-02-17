#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n,m; cin >> n >> m;

        vector<int> a(n), b(m);

        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<m; i++) cin >> b[i];

        
        int cnt = 0;

        for(int i = 0; i<n; i++)
        {
           
            for(int j = 0; j <m; j++)
            {
                if(a[i] > b[j]) cnt++;
            }
        }

        cout << cnt << endl;
        
    }
    
    return 0;
}
