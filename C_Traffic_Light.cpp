#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
        int n; char c ;
        cin >> n >> c;
        string s; cin >> s;

        s += s;
        n = 2 * n;

        int last = -1, ans = 0;

        for(int i = n -1 ; i>= 0; i--)
        {
            if(s[i] == 'g') last = i;
            if(s[i] == c)
            {
                ans = max(last- i, ans);
            }
        }

        cout << ans << endl;
        
             
    }
    
    return 0;
}
