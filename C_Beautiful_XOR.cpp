#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int a, b; cin >> a >> b;

        if(a == b) {cout << 0 << endl; continue;};

        int ans = a ^ b;

        if(a < b )  {
            cout << -1 << endl;
            continue;
        }
        else if((ans ^ a) == b)
        {
            cout << 1 << endl;
            cout << ans << endl;
        }else{
            cout << 2 << endl;
            cout << b << " " << a << endl;
        }
        
    }
    
    return 0;
}
