#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;

       int a[n];

        for(int i = 0; i<n; i++) cin >> a[i];

        sort(a,a+n);

        int cnt = 1, ans = 1;

        for(int i = 1; i<n; i++)
        {
            if(a[i] - a[i-1] <= k) 
            {
                cnt++;
            }else 
            {
                cnt = 1;
            }

            ans = max(cnt, ans);
            
        }

        cout << n - ans << endl; 
        
    }
    
    return 0;
}
