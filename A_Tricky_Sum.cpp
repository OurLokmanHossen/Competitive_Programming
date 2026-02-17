#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

void solve() {

    ll n; cin >> n;

    ll totalSum = n * (n + 1) / 2;

    ll p_sum = 0;

    for(ll p = 1; p <= n; p *= 2)
    {
        p_sum += p;
    }
 
    cout << totalSum - 2 * p_sum << endl;

}

int main() {
    fastio();
    int t ; cin >> t;
    while (t--) solve();
}
