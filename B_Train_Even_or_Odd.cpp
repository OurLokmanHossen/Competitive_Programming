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

        int s1 = 0;

        for(int i = 0 ; i<n; i+=2)
        {
            s1 += a[i];
        }

         int s2 = 0;

        for(int i = 1 ; i<n; i+=2)
        {
            s2 += a[i];
        }

        cout << max(s1, s2) << endl;
    }
    
    return 0;
}
