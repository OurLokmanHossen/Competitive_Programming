#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
   int n; cin >> n;

   bool found = true;

   for(int i = 2; i <= n; i++)
   {
     while( n % i == 0)
     {
        if(!found) cout << "*" ;
        cout << i ;
        n /= i;
        found = false;
        
     }
   }
    
    return 0;
}
