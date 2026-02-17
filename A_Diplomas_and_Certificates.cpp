#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    ll n, k; cin >> n >> k;

    ll diplomas = n / (2 * (1 + k));
    ll certificates = k * diplomas;
    ll non_winner = n - (diplomas + certificates);

    cout << diplomas << " " << certificates << " " << non_winner << endl;

    
    return 0;
}
