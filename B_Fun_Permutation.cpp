#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

        vector<int> p(n);

        for(int i = 0; i<n; i++) cin >> p[i];

        vector<int> q(n);

        for(int i = 0; i<n; i++)
        {
            q[i] = n + 1 - p[i];
        }

        for(auto it : q)
        {
            cout << it << " " ;
        
        }
         cout << endl;
       
    }
    
    return 0;
}
