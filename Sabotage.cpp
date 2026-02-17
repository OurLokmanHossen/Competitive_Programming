#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, x, k; cin >> n >> x >> k;

        vector<int> a(n);

        for(int i = 0; i<n; i++) cin >> a[i];

        sort(a.rbegin(), a.rend());

        for(int i = 0; i<k; i++)
        {
            a[i] = 0;
            x += 100;
        }

        int cnt = 0;

        for(int i = 0; i<n; i++)
        {
            if(a[i] > x)
            {
                cnt++;
            }
        }

        cout << cnt + 1 << endl;
        
    }
    
    return 0;
}
