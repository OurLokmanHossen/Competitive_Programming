#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> cnt(2*n + 1, 0);
        for(int i = 0; i<2*n; i++)
        {
           int x; cin >> x;
           cnt[x]++;
        }

        int odd = 0, even = 0;

        for(int i = 1; i<= 2*n; i++)
        {
            if(cnt[i] == 0) continue;
            if(cnt[i] % 2 != 0) odd++;
            else even++;
        }

     int ans = odd + 2 * even;

     if(odd == 0)
     {
       if(even % 2 != n % 2) ans -= 2; 
     }

     cout << ans << endl;
        
    }
    
    return 0;
}
