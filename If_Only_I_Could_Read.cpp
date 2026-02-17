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

        int found = false;

        for(int i = 0; i<n-1 ;i++)
        {
            if(a[i]> a[i+1])
            {
                found = true;
                cout << i+1 << " " << i+2 << endl; // 1 based index
                break;
            }
            
        }

        if(!found) cout << -1 << endl;

      
        

        

       
    }
    
    return 0;
}
