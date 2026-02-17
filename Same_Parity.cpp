#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        int a[n];

        for(int i = 0; i<n; i++) cin >> a[i];

        int oodP = (n+1) / 2;
        int evenP = n / 2;

        int even = 0, odd = 0;


        for(int i = 0; i < n; i++)
        {
           if(a[i] % 2 == 0) even++;
           else odd++;
        }

       if(even >= evenP && odd >= oodP || even >= oodP ) cout << "YES" << endl;
       else cout << "NO" << endl;
        
    }
    
    return 0;
}
