#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<int> a(n), b(n);

        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b.begin(),b.end());

        bool found = false;

        for(int i = 0; i<n; i++)
        {
            if(a[i] != b[i]) 
            {
                found = true;
                break;
            }
        }

        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
    return 0;
}
