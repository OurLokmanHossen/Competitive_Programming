#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int a , b; cin >> a >> b;

        int ma = max(a,b);
        int mi = min(a,b);

        if(ma == mi) 
        {
            cout << 0 << endl;
            continue;
        }
        if(ma % mi == 0) cout << 1 << endl;
        else cout << 2 << endl;
        
    }
    
    return 0;
}
