#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<int> v(n);

        for(int i = 0 ; i<n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        bool found = false;

        for(int i = 0; i<n;)
        {
            int x = v[i];

            int ub = upper_bound(v.begin(), v.end(),x) - v.begin();

            int cnt = ub - i;

            if(cnt >= 3) 
            {
                found = true;
                cout << x << endl;
                break;
            }

            i = ub;
        }

        if(!found) cout << -1 << endl;
 
        
    }
    
    return 0;
}
