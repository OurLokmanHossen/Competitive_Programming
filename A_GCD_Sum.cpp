#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

         while(true)
         {
             ll x = n;
             ll sum = 0;
             while(x)
             {
                sum += x % 10;
                x /= 10;
             }

             if(__gcd(n,sum) > 1)
             {
                cout << n << endl;
                break;
             }

             n++;
         }
         
        
    }
    
    return 0;
}
