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

        bool found = false;

        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j <n; j++)
            {
                if(__gcd(a[i], a[j]) == 1)
                found = true;
               
            }
            
        }

        if(found) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    }
    
    return 0;
}
