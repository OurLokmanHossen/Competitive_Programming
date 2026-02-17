#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n,k; cin >> n >> k;

        int a[n];
        int s = 0;
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
            s += a[i];
        }

        if(s < n) 
        {
            cout << "NO" << endl;
            continue;
        }
        else{

            int remain = s % n;
            if( remain == 0) cout << "YES" << endl;
            else if( k >= 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        
    }
    
    return 0;
}
