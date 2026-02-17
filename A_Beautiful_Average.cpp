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

        int s = 0;

        for(int i = 0; i<n ;i++)
        {
            cin >> a[i];
            
        }

        sort(a, a+n);

        int mi = a[n-2];
        int mx = a[n-1];

        cout << mx << endl;
        
    }
    
    return 0;
}
