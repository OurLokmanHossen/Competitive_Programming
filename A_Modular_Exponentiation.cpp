#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

ll binaryExIter(ll a, ll n)
{
   ll ans = 1;
   while(n)
   {
     if(n&1){
        ans = ans * a;
    }

    n/=2;
    a = a*a;
   }
   return ans ;
}


int main() {
    fastio();

    ll n, m; cin >> n >> m;
   

    if(n >= 27) cout << m << endl;
    else 
    {
        ll result = binaryExIter(2, n);
        cout << m % result << endl;
       
    }
     
    return 0;
}
