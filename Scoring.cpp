#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
        
        int x, y; cin >> x >> y;

        int a = (y-x)/2;
        int b = a + x;

        cout << b << " " << a << endl;        
        
        
    }
    
    return 0;
}
