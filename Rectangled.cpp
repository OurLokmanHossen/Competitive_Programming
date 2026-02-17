#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        
        int h_perim = n/2;
        int l = h_perim/2;
        int w = h_perim - l;

        cout << l * w << endl;
        
    }
    
    return 0;
}
