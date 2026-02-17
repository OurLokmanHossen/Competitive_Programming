#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n; int a[n];
        for(int i = 0; i<n; i++) cin >> a[i];

        ll cnt0 = 0, cnt1 = 0;

        for(int i = 0; i<n; i++)
        {
            if(a[i] == 0) cnt0++;
            if(a[i] == 1) cnt1++;

        }

        ll ans = cnt1 * pow(2,cnt0);
        cout << ans << endl;
     
        
    }
    
    return 0;
}
