#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) cin >> arr[i];
        

        int min_val = arr[0];
        
        bool found = true;

        for (int i = 0; i < n; i++) {
            if (arr[i] >= 2 * min_val) 
            {
                found = false;
                break;
            }
            min_val = min(min_val, arr[i]);
        }

        if (found) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
    return 0;
}
