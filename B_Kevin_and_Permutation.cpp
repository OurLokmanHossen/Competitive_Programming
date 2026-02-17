#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;

        vector<int> a(n);

        int small = 1;

        for(int i = k-1 ; i< n; i += k)
        {
           a[i] = small;
           small++;
        }

        for(int i = 0; i< n ; i++)
        {
            // a[i] == 0 (if this elment is not present into the array)
            if(!a[i]) 
            {
                a[i] = small;
                small++;
            }
        }

        for (auto it : a)
        {
            cout << it << " " ;
        }

        cout << endl;
        
    }
    
    return 0;
}
