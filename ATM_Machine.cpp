#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;

        int a[n];

        for(int i = 0; i<n; i++) cin >> a[i];

        string str ;

        for(int i = 0; i<n; i++)
        {
            if(a[i] <= k)
            {
                 str += '1';
                  k -= a[i];
            }
            else
                str += '0';
        }

        cout << str << endl;
        
    }
    
    return 0;
}
