#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        string s; cin >> s;

        s += s;
        n *= 2;

        int curr = 0, ans = 0;

        for(int i = 0; i<n; i++)
        {
            if(s[i] == '0') curr++;
            else curr = 0;
            ans = max(curr, ans);
        }

        cout << ans << endl;
        
    }
    
    return 0;
}
