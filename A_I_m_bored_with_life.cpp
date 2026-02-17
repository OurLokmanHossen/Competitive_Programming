#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    ll a, b; cin >> a >> b;

    ll n = min(a, b);

   
    ll fact = 1;

   for( ll i = 1; i<= n; i++)
   {
      fact*= i;

   }

   cout << fact << endl;

    return 0;
}
