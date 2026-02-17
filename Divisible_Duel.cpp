#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int x, y; cin >> x >> y;

        int e  = 0, o = 0;

        for(int i = x; i<= y; i += x)
        {
            if(i % 2 == 0) e += i;
            else o += i;
        }

        if( e >= o) cout << "YES\n";
        else cout << "NO\n";

        


        
    }
    
    return 0;
}
