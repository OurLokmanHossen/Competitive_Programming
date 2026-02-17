#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        // cout << ceil(n/2.0) << endl;

        // cout << (n+1)/2 << endl;

        if(n % 2 == 0) cout << n/2 << endl;
        else cout << (n/2) + 1 << endl;

    }
    
    return 0;
}
