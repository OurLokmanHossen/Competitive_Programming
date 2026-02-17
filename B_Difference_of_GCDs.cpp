#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n, l, r; cin >> n >> l >> r;

        vector<ll> a(n+1);

        for(int i = 1; i<=n; i++)
        {
            bool found = false;
            for(int j = l; j <= r; j++)
            {
                if(__gcd(i, j) == i)
                {
                    a[i] = j;
                    found = true;
                    break;
                }
            }
        if(!found) 
        {
            cout << "NO" << endl;
            break;
        }
        }
  
            cout << "YES" << endl;
            for(int i = 1; i<= n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        

        
    }
    
    return 0;
}
