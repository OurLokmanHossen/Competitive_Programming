#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, x, c; cin >> n >> x >> c;

        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a+n);

        int cnt = 0, sum2 = 0;
        
        for(int i = 0; i < n; i++)
        {
            if( x - a[i] > c)
            {

                cnt++;
                a[i] = x;

            }

             sum2 += a[i];
      
        }

        // cout << sum2 << endl;

        cout <<( sum2 - (cnt * c)) << endl;
        
    }
    
    return 0;
}
