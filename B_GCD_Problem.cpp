#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

        ll res = n / 2;

        if(n % 2 == 0)
        {
          cout << res << " " << res - 1 << " " << 1 << endl;
        }else{
          
            int cur = (n-1) / 2;
            if(cur % 2 == 0)
            {
                cout << cur + 1 << " " << cur -1 <<  " " << 1 << endl;
            }

            else cout << cur + 2 << " " << cur - 2 << " " << 1 << endl;
        }

        
        
    }
    
    return 0;
}