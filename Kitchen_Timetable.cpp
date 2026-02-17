#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        vector<int> a(n), b(n);
        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<n; i++) cin >> b[i];

        int cnt = 0;
        int start = 0;

        for(int i = 0; i<n; i++)
        {
            int res = a[i] - start;
            if(res >= b[i])
            {
                cnt++;
            }

            start = a[i];
        }

        cout << cnt << endl;

    }
    
    return 0;
}
