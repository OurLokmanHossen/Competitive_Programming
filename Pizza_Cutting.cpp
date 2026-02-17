#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        if( n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        if(n > 1 && n % 2 !=0) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }
    
    return 0;
}
