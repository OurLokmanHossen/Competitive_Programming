#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    ll n, m; cin >> n >> m;

    ll a[m];

    for(int i = 0; i<m; i++) cin >> a[i];

    ll cur = 1, sum = 0;

    for(int i = 0; i<m; i++)
    {
        if(a[i] >= cur)
        {
          sum += a[i] - cur;
        } 
        else{
           
            sum += (n- cur) + a[i];
        }

        cur = a[i];
    }

    cout << sum << endl;
    
    return 0;
}
