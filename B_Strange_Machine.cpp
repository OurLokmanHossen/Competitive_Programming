#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, q; cin >> n >> q;
        string s; cin >> s;

        int cntB = count(s.begin(), s.begin(), 'B');

        vector<int> a(q);

        for (int i = 0; i < q; i++) cin >> a[i];

        for(int i = 0; i<q; i++)
        {
            int x = a[i];

            if(cntB == 0)
            {
                cout << x << endl;
                continue;
            }

          
            int ans = 0;
            
            while(x > 0)
            {
                for(char c : s)
                {
                    if(c == 'B') x/= 2;
                    else x--;
                }
                ans++;
                if(x == 0) break;
            }

            cout << ans << endl;
        }         
    }
    
    return 0;
}
