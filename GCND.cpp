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

        sort(a, a+n);

        int mi = a[0] ;
        int mx = a[n-1];


        if(mx == mi)
        {
            cout << mx - 1 << endl;
        }

        else 
        {
            int res = mx - 1;
            if(mx % res == 0 || mi % res == 0)
            {
                res--;
            } 

            cout << res << endl;
             
        }

       


        
    }
    
    return 0;
}
