#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        int y, r; cin >> y >> r;

        int cnt = 0;

        cnt = y/2;

        cnt += r;

        cout << min(n,cnt) << endl;
        
    }
    
    return 0;
}
