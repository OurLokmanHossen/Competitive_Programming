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

        sort(a, a+n);

        int cnt = 0;

        int min = a[0];

        for(int i = 1; i<n; i++)
        {
           if(a[i] > min) 
           {
            cnt++;
            min = a[i];
           }
        }

        cout << cnt + 1 << endl;
      
    }
    
    return 0;
}
