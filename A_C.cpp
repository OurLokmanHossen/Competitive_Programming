#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll a, b , n; cin >> a >> b >> n;

        int cnt = 0;

       while(a <= n && b <= n)
       {
           if(a < b)
           {
                a += b;
           }else 
           {
            b += a; 
           }
           cnt++;
       }

        cout << cnt << endl;   
  
    }
    
    return 0;
}
