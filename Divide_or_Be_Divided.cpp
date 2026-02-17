#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    ll n, x, y; cin >> n >> x >> y;
    string s; cin >> s;

    ll i = x - 1;
    ll j = y-1;

    ll a = s[i] - '0';
    ll b = s[j] - '0';

    
    if(a == 0 || b == 0) cout << "NO" << endl;
    else if(a % b == 0 || b % a == 0) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
