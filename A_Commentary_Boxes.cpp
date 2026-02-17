#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
   ll n,m,a, b; cin >> n >> m >> a >> b;

   ll buildcost = 0, demolishCost = 0;

   if( n % m == 0) 
   {
    cout << 0 << endl;
   }
   else {

     buildcost = (m - (n%m)) * a;

     demolishCost = n % m * b;

    cout << min(buildcost, demolishCost) << endl;
   }

    
    return 0;
}
