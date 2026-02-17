#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;

       int mi = (k * (k + 1)) / 2  + (k - 1);

      if(mi <= n) cout << "YES" << endl;
      else cout << "NO" << endl;

        
    }
    
    return 0;
}
