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

        int zero = 0, one = 0, pone = 0;

        for(int i = 0; i<n; i++)
        {
            if(a[i] == -1) one++;
            else if(a[i] == 0) zero++;
            else pone++;
        }

        int ans = 0;

        ans += zero;

        if(one % 2 == 1) 
        {
            ans += 2;
        }
       

        cout << ans << endl;
        
    }
    
    return 0;
}
