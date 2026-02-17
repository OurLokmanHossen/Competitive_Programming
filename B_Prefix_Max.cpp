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

        sort(a.begin(),a.end());

        int big = a[n-1];

        int res = 0;

        for(int i = 0; i<n; i++)
        {
              res += big; 
        }

        cout << res << endl;


        
    }
    
    return 0;
}
