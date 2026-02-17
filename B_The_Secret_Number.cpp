#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

        vector<ll> ans;

    
        ll p = 1;

        ll p1 = p * 10 + 1;

        while(p1 <= n)
        {
            if(n % p1== 0)
            {
                ans.push_back(n/p1); 
            }
            p = p * 10;
            p1 = p*10 + 1;

        }

        if(ans.size() == 0) cout << 0 << endl;
        else
        {
            sort(ans.begin(), ans.end());
            cout << ans.size() << endl;
            for(auto x : ans) cout << x << " ";
            cout << endl;
            
        }
        
    }
    
    return 0;
}
