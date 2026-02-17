#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

       int x, y; cin >> x >> y;

       int res = x * x + y * y;
       int root = sqrt(res);

       if( x == 0 && y == 0) cout << 0 << endl;
       else if( root * root == res) cout << 1 << endl;
       else cout << 2 << endl;
     
       
        
    }
    
    return 0;
}
