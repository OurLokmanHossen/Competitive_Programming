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

        int ops = 0;

        bool ok = true;

        for(int i = n-2; i>= 0; i--)
        {
            while(a[i] >= a[i+1] && a[i] > 0)
            {
                a[i] /= 2;
                ops++;

            }

            if(a[i] == a[i+1]) 
            {
                ok = false;
                break;
            }
        }

       if(ok) cout << ops << endl;
       else cout << -1 << endl;
        
    }
    
    return 0;
}
