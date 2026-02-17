#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        int cnt = 0;

        while( n != 50)
        {
            if(n < 50)
            {
                n += 2;
                 

            }
            else 
            {
                n -= 3;
                
            }

            cnt++;

           
        }

        if(n == 50) cout << cnt << endl;
         
        
    }
    
    return 0;
}
