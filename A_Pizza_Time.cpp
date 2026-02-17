#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;

        ll h = 0;

        while(n >= 3)
        {
            int m1 = n / 3;
            int m2 = (n - m1) / 2;
            int m3 = n - m1 - m2;

            h += m1;
            n = m3;
        }

        cout << h << endl;

        
    }
    
    return 0;
}
