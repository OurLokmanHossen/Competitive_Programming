#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        vector<int> a(n);

        for(int i = 0; i<n ; i++) cin >> a[i];

        int ans = INT_MAX;

        
        ans = INT_MAX;
        for(int i = 0; i< n-1 ; i++)
        {
            int lokman = a[i] + a[i+1]/2;
            for(int j = i+2; j < n; j++)
            {
               lokman = min(lokman,(a[i],a[i]+a[j]));
            }
            ans = min(ans,lokman);
        }

        cout << ans << endl;





        

        
        
    }
    
    return 0;
}
