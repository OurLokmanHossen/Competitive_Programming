#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, a, b; cin >> n >> a >> b;

        if(n - a- b >= 2 || (n == a && n == b)) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    }
    
    return 0;
}
