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

        int c = a[0];
        int cnt = 0;

        for(int i = 0; i<n; i++)
        {
           if(a[i] >= c) cnt++;
        }

        cout << cnt << endl;

        
        
    }
    
    return 0;
}
