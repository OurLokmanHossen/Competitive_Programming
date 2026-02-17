#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
    int l = 1;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        l = n / i;
        break;
      }
    }
    cout << l << ' ' << n - l << endl;

          
       }
        
    
    return 0;
}
