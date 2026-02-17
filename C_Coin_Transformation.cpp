#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
        
        ll n; cin >> n;
       
        ll mxC = 1;
        while(n > 3)
        {
            n /= 4;
            mxC *= 2;
        }

        cout << mxC << endl;
       
    }
    
    return 0;
}
