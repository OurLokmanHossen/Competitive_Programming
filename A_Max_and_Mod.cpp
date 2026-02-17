#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        if(n % 2 == 0) cout << -1 << endl;
        else 
        {
            cout << n << " ";
            for(int i = 1; i<n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }

        
        
    }
    
    return 0;
}
