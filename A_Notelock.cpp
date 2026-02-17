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

        int l = k;

        int ans = 0;

        for(int i = 0; i<n ; i++)
        {
            l++;
            if(s[i] == '1')
            {
                 if( l >= k)
                 {
                    ans++;
                    
                 }
                 l = 0;
            }
            
        }

        cout << ans << endl;
        
    }
    
    return 0;
}
