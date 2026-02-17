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

        int mini = INT_MAX;
        int maxi = INT_MIN;

       for(int i = 0; i<n; i++)
       {
          mini = min(a[i], mini);
          maxi = max(a[i], maxi);
       }

        cout << max(maxi - a[0], a[n-1] - mini) << endl;

        
    }
    
    return 0;
}
