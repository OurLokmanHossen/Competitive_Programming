#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;

        vector<int> v(k+1,0);

        for(int i = 1; i<= k; i++)
        {
            int b, c; cin >> b >> c;
            v[b] += c;
        }

        sort(v.rbegin(), v.rend());

        int ans = 0;

        for(int i= 0; i<min(n,k); i++)
        {
            ans += v[i];
        }

        cout << ans << endl;

       
    }
    
    return 0;
}
