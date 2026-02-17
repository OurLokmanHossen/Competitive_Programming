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

        int mx = INT_MIN;
        int mn = INT_MAX;
        int mx_ind = -1, mn_ind = -1;

        for(int i = 0; i<n; i++)
        {
            if(a[i] > mx) 
            {
                mx = a[i];
                mx_ind = i;
            }
            if(a[i] < mn) 
            {
                mn = a[i];
                mn_ind = i;
            }
        }

        if(mn_ind < mx_ind) cout << mn << " " << mx << endl;
        else cout << mx << " " << mn << endl;

        
        
    }
    
    return 0;
}
