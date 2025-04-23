#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

   long long n, m , k, x, ans = 0, y;
   cin >> n >> m >> k;

   x = min({n,m,k});

   n -= x; 
   m -= x;
   k -= x;

  ans += x;

  y = min(n/2,k);
  ans += y;

  cout << ans << endl;

    return 0;
}