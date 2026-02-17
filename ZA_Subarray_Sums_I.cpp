#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
   ll n, x; cin >> n >> x; 

   ll a[n]; 
   for(ll i = 0; i<n; i++) cin >> a[i];

   ll mSum = INT_MIN;
   ll currSum = 0;

   int cnt = 0;

   for(ll i = 0; i<n; i++)
   {
      currSum += a[i];

      mSum = max(currSum, mSum);

      if(mSum == x)
      {
        cnt++;
      }
      
   }

   cout << cnt << endl;
    
    return 0;
}
