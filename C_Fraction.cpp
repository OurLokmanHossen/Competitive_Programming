#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int n; cin >> n;

    for(int a = n/2; a>0; a--)
    {
      int b = n-a ;
       if(__gcd(a,b)==1)
       {
        cout << a << " " << b << endl;
        break;
       }
    }
    
   
    
    return 0;
}
