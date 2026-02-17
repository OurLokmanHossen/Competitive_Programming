#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int l, t, h;
        cin >> l >> t >> h;

        int tor, hare;

      tor = (l + t -1) / t;
      hare = (l +h - 1 )/ h;

       cout << (tor - hare) - 1 << endl;

        
        
    }
    
    return 0;
}
