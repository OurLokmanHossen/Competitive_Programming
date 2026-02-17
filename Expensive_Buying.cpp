#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;

        vector<int> a(n);

        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        int mx = 0;

        for(int i = 0; i<k; i++)
        {
            mx += a[i];
        }

        cout << mx << endl;

        
    }
    
    return 0;
}
