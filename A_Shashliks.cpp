#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {

    int k , a , b , x , y; cin >> k >> a >> b >> x >> y;

    int ans1 = 0, ans2 = 0;

    if(k >= a)
    {
        ans1 = (k-a)/x +1;
    }

    if(k >= b)
    {
        ans2 = (k-b) / y + 1;
    }

    
    cout << max(ans2, ans1) << endl;


}

int main() {
    fastio();
    int t; cin >> t;
    while (t--) solve();
}
