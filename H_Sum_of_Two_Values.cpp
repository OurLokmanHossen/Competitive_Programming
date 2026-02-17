#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    ll n, x; cin >> n >> x;

    ll a[n];

    for(int i = 0; i<n; i++) cin >> a[i];

    sort(a, a+n);

    int l, r = n - 1 ; 

    for(int l = 0; l<n; l++)
    {
        if(l + r == x)
        cout << l + 1 << " " << r + 1 << endl;
       return 0;
    }

    cout << "IMPOSSIBLE" << endl;


    return 0;
}
