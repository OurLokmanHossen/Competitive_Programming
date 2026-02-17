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

        int total = 0;

        for(int i = 0; i<n; i++) 
        {
            cin >> a[i];
            total += a[i];        
        }

        if(total % 3 == 0)
        {
            cout << 1 << " " << 2 << endl;
        }else cout << 0 << " " << 0 << endl;
 
    }
    
    return 0;
}
