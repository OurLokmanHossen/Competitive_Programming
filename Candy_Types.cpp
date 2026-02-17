#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        vector<int> a(n+5, 0);

        for(int i = 0; i<n; i++) 
        {
            int x; cin >> x;
            a[x]++;
        }

        int mx = 0, res = 0;

        for(int i = 1; i<= n; i++)
        {
            if(a[i] > mx)
            {
                mx = a[i];
                res = i;
                
            }
        }

        cout << res << endl; 

        
        
    }
    
    return 0;
}
