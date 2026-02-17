#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;
        string s; cin >> s;

        int ans = 0, cnt = 0;

        for(int i = 0; i<n; i++)
        {
            if( s[i] == '1') 
            {
                cnt = k;
            }
            else 
            {
                if(cnt == 0) ans++;
                else cnt--;
            };
            
        }

        cout << ans << endl;
        
    }
    
    return 0;
}
