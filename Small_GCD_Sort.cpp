#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        
        vector<pair<int,int>> a;

        int mx = 0;

        for(int i = 1; i<= n; i++)
        {
            mx = (mx, __gcd(n, i));

            a.push_back({mx, i});
         
        }
    
        for(auto it : a)
        {
            cout << it.second << " ";
        }

        cout << endl;

          
        
    }
    
    return 0;
}
