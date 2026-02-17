#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

        ll cnt = 0;

        while(n> 1) 
        {
            if(n % 6 == 0)
            {
                n /= 6;
                
            }else 
            {
                n *= 2;
            }
            cnt++;
        }
        if(n == 1) cout << cnt << endl;
        else cout << - 1 << endl;


    }
    
    return 0;
}
