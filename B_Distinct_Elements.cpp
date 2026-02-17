#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n; cin >> n;

        vector<ll> b(n);

        for(int i = 0; i<n ; i++) cin >> b[i];

       vector<ll> a(n);

         a[0] = 1;
        ll neVal = 1;

        for(int i = 1; i<n; i++) 
        {
            ll dif = b[i] - b[i-1];

            ll index = i+1;

            if( dif == index) 
            {
                a[i] = ++neVal;
            }
            else 
            {
                a[i] = a[i-dif];
            }
            
        }

         for(auto it : a)
            {
                cout << it << " ";
            }

            cout << endl;

    
        
    }
    
    return 0;
}
