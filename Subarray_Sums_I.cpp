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

        for(int i = 0; i <n; i++) cin >> a[i];

        int cnt = 0;

        for(int i = 0; i<n; i++)
        {
             int s = 0;

             for(int j = i; j<n; j++)
             {
                 s += a[j];

                 if( s == k) cnt++;
             }

        }        
        cout << cnt << endl;
        
    }
    
    return 0;
}
