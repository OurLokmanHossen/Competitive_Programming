#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        int a[n];
        for(int i = 0; i<n; i++) cin >> a[i];

        sort(a, a+n);

        for(int i = 0; i<n-1; i++)
        {
            if( i% 2 != 0)
            {
                 if(a[i] < a[i+1])
            {
                swap(a[i], a[i+1]);
            }
            }
        }

        
        bool f = false;

       for(int i = 0; i<n-1; i++)
       {
         if(a[i] > a[i+1])
         {
           f = true; 
           break;
         }
       }

       if(f) cout << "NO" << endl;
       else cout << "YES" << endl;
        
    }
    
    return 0;
}
