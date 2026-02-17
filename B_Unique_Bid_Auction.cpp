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
       
        map<int, int> mp ;

        for(int i = 0; i<n ; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int mi = INT_MAX;

        for(int i = 0; i<n ; i++)
        {
            if(mp[v[i]] == 1)
            {
                mi = min(mi, v[i]);
            }
        }


        int ans = -1; 
       
        for(int i = 0; i<n; i++)
        {
            if(mi == v[i])
            {
               ans = i + 1;
            }
        }

        cout << ans << endl;
        
    }
    
    return 0;
}
