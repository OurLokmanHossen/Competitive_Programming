#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
  ll n; cin >> n;

  int ans = INT_MAX;

   for(int i = 1; i<=n; i++)
   {
     if(n % i == 0)
     {
       int l = i ;
        int b = n / i;
         int periM = 2 * (l+ b);

        ans = min(ans, periM);
     }

   
   }

   cout << ans << endl;

     
    
    
    return 0;
}
