#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, w; cin >> n >> w;

        int rakh = n/w;

        cout << n - rakh << endl;
        
    }
    
    return 0;
}
