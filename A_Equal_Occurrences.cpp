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

        for(int i = 0; i<n; i++) cin >> a[i];

        vector<int> freq(n+1, 0);

        for(int i = 0; i<n; i++) freq[a[i]]++;

        int ans = 0;

        for(int i = 1; i<= n; i++)
        {
            int cnt = 0;

            for(int j = 1; j <= n; j++)
            {
                if(freq[j] >= i) cnt++;
            }

            ans = max(ans, cnt * i);

        }

        cout << ans << endl;
    
        
    }
    
    return 0;
}
