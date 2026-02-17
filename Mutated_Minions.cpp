#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        int k ; cin >> k;
        int a[n];
        for(int i = 0; i<n; i++) cin >> a[i];

        for(int i = 0; i<n; i++)
        {
            a[i] += k;
        }
       
         int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            if(a[i] % 7 == 0) cnt++;
        }

        cout << cnt << endl;
        
    }
    
    return 0;
}
