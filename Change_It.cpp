#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        map<int,int> freq;

        int mx = 0;

        for(int i = 0; i<n; i++)
        {
           int x; cin >> x;
           freq[x]++;
           mx = max(mx, freq[x]);
          
        }

        if(mx == n) cout << 0 << endl;
        else cout << n- mx << endl;  
    }
    
    return 0;
}
