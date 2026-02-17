#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n, k, x; cin >> n >> k >> x;


        if(k > 32) {cout << "No" << endl; continue;}

        // 1LL << (k-1) == 2^ k -1

        if(x >= 1LL << (k-1)) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    }
    
    return 0;
}
