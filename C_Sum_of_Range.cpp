#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
   ll a, b; cin >> a >> b;

   if(a>b) swap(a,b);

  ll even, beven, aeven, sum1, sum2 ;

   sum1 = (b * (b + 1)) / 2 ;

   sum2 = sum1 - (a * (a - 1))/ 2;

   beven = b / 2;

   aeven = (a-1) / 2;

   even = (beven * (beven + 1)) - (aeven * (aeven + 1));

   cout << sum2 << endl << even << endl;

    return 0;
}
