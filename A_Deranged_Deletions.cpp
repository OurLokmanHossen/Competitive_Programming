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

        bool found = false;

        for(int i = 0; i<n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                found = true;
                cout <<"YES" << endl;
                cout << 2 << endl;
                cout << a[i] << " " << a[i+1] << endl;
                
                break;
            
            }
        }

       if(!found) cout << "NO" << endl;
       
        
    }
    
    return 0;
}
