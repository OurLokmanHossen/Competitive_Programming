#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

         cin >> n;
   for(int i = 1; i <= n; i++) cin >> a[i];
    
    if (n == 2) 
    {
        ans = a[1] + min(a[1], a[2]);
    } else 
    {
        if (a[1] > a[2]) 
        {
            ans = a[1] + a[2]; 
        } else 
        {
            ans = a[1] + min(a[1], a[2]); 
        }
    }
        
    }
    
    return 0;
}
