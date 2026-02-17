#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int a, b , c, x, y; cin >> a >> b >> c >> x >> y;

       int dog = max(0, x-a);
       int cat = max(0, y-b);

       int sum = dog + cat;

        
        if( c >= sum) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
    return 0;
}
