#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

        vector<ll> a(n), prefix(n);

         for(int i = 0; i<n ;i++) cin >> a[i];

         int ocnt = 0;

         for(int i = 0; i<n; i++)
         {
            
            if(a[i] % 2 == 1) ocnt++;
            
         }

         if(ocnt == 1) cout << "Yes" << endl;
         else cout << "No" << endl;

        
    }
    
    return 0;
}
