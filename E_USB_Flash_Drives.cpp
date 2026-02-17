#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n, m; cin >> n >> m;

    int a[n]; 

    for(int i = 0; i<n; i++) cin >> a[i];

    sort(a, a+n , greater<int>());
    
    int s = 0, cnt = 0;
    for(int i = 0 ; i<n ; i++)
    {
        s += a[i];
        cnt++;

        if(s >= m)
        {
          break;
        }
        
    }

    cout << cnt << endl;

    
    return 0;
}
