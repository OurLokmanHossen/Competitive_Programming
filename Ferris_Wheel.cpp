#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(int i = 0 ; i<n; i++) cin >> a[i];

    int s = 0;

    for(int i = 0; i<n; i++)
    {
        s += a[i];
    }

    if(s % x == 0) cout << s / x << endl;
    else cout << s / x + 1 << endl;
    
    return 0;
}
