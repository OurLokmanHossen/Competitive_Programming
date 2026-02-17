#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    int asum = 0, bsum = 0;

    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        asum += a[i];
    }

   
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

   
    int ans = INT_MIN;

   
    for(int i = 0; i < n; i++){
        asum -= a[i];        
        if(i > 0)
            bsum += b[i-1];  

      
        ans = min(ans, max(asum, bsum));
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
