#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >>n;
        vector<int> a(n);
        for(int i = 0 ; i<n; i++) cin >> a[i];

        int mi = INT_MAX;

       for(int i = 0 ; i<n-1; i++)
       {
          mi = min (mi, a[i] + a[i+1]);
       }

       cout << mi << endl;


        
    }
    
    return 0;
}
