#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int x, y; cin >> x >> y;

       int def = 50  - x;

       int mini =  2 * y;
       int maxi = 2 * (y+5);

       if(def >= mini && def <= maxi) cout << "Yes" << endl;
       else cout << "No" << endl;
        
    }
    
    return 0;
}
