#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

        ll n; cin >> n;
        ll a[n];

        for(int i = 0; i<n; i++) cin >> a[i];

        sort(a, a+n);

            for(int i = 0; i<n-2; i++)
        {
            if(a[i] + a[i+1] > a[i+2]) 
            {
                
                cout << "YES" << endl;
                return 0;
            }
        
        }
    
    
    cout << "NO" << endl;


    return 0;
}
