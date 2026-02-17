#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int k, x; cin >> k >> x;

        //  while(k--)
        //  {
        //    x = x * 2;
        //  }

        // for(int i = 0; i<n; i++)
        // {
        //     x = x * 2;
        // }

        // cout << x << endl;

        ll inV = x * (ll)pow(2,k);

         cout << inV << endl;
         
    }
    
    return 0;
}
