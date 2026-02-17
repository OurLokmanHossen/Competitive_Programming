#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

ll binIter(ll b, ll p, ll m)
{

    ll ans = 1;

     b %= m;

    while(p)
    {
        if(p&1)
        {
          ans = (ans * b) % m ;

        }

        p >>= 1;
        b = (b* b) % m;
    }

    return ans;

}

int main() {
    fastio();
  

        ll b, p, m;
        while(cin >> b >> p >> m)
        {
           cout << binIter(b, p, m) << endl;
        }

      
        
    return 0;
}
