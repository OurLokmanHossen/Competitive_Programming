#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int x, y, k; cin >> x >> y >> k;

       if(k < x) cout << k * 2 << endl;
       else cout << x * 2 + (k-x) * 1 << endl;
      
    }
    
    return 0;
}
