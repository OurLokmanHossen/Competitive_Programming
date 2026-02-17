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

        bool found = true;

        for(int i = 1; i<n; i++)
        {
            if(abs(a[i] - a[i-1]) != 5 && abs(a[i] - a[i-1]) != 7 )
            {
                found = false;
                break;
            } 
        
    }

    if(found) cout << "YES" << endl;
    else cout << "NO" << endl;
}
    
    return 0;
}
