#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        string s; cin >> s;

        map<char, int> mp;

        int maxi = 0;

        for(auto x : s)
        {
            mp[x]++;
            maxi = max(maxi, mp[x]);
        }

        if(maxi == 1 || maxi == 2) cout << 4 << endl;
        else if(maxi == 3) cout << 6 << endl;
        else cout << -1 << endl;
        
    }
    
    return 0;
}
