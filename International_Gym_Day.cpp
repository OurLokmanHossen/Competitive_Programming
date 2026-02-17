#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int d, y, x; cin >> d >> y >> x;

        int dis = 1;
        int cnt = 0;

        if( y == x) {cout << 0 << endl; continue;}

        while( y > x)
        {
            x = x-1;
            cnt++;
            y = y * (100-(d*dis)) / 100;
            dis++; 
            
        }

        if( y == x) cout << cnt << endl;
        else cout << -1 << endl;

        

        
    }
    
    return 0;
}
