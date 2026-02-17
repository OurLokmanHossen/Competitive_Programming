#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int findPower(ll n, ll b, ll m)
{
    if(b == 0) return 1;

    ll half = findPower(n, b/2, m);
    ll result =  (half * half);
    if(b % 2 == 1)
    {
        result = (result * n);
    }
    return result;
}

int main() {
    fastio();
    
  
   ll n = 2; 
   ll b ; cin >> b;

   ll m; cin >> m;


   cout << findPower(n,b, m) << endl;

   
    return 0;
}
