#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, c; cin >> n >> c;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        string s; cin >> s;

        int coin = 0, coin2 = 0;

        for(int i = 0; i<n; i++)
        {
            if( s[i] == '0') coin += v[i];
            else coin2 += v[i];     
        }

        if( coin >= c) cout << max(coin, coin + coin2 - c) << endl;
        else cout << coin << endl;

      
    }
    
    return 0;
}
