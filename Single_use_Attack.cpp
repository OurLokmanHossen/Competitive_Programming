#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int h, x, y; cin >> h >> x >> y;

        int cnt = 0;

        h -= y;
        cnt++;

        while(h > 0)
        {
            h -= x;
            cnt++;
        }

        cout << cnt << endl;
        
    }
    
    return 0;
}
