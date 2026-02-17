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

       int zero = 0, non_zero = 0;

        for(int i = 0; i<n; i++) 
        {
            cin >> a[i];

            if(a[i] == 0) zero++;
            else non_zero++;
        }

        if(zero == 0) cout << 0 << endl;
        else if(zero <= non_zero+1) cout << 0 << endl;
        else{

            int mx = *max_element(a.begin(), a.end());
            if(mx == 1) cout << 2 << endl;
            else cout << 1 << endl;
        }   
        
    }
    
    return 0;
}
