#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
 
int main() {
    fastio();
    
   ll l, r; cin >> l >> r;
 
   cout << "YES" << endl;
   for(ll i = l; i <= r; i+=2)
   {
     cout << i << " " << i+1 << endl;
   }
 
    return 0;
}