#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

        ll totalSum = 0;


       for(ll i = 1; i<=n; i++)
       {
        
            if(i % 3 != 0 && i % 5 != 0)
            {
                totalSum += i;
            }
       
       }

       cout << totalSum << endl;
        
    }
    
    return 0;
}
