#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        if(n % 3 == 0) cout << 0 << endl;
        else if(n % 3 == 1) cout << 2 << endl;
        else cout << 1 << endl;
        
    }
    
    return 0;
}
