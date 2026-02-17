#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n, m; cin >> n >> m;
    int rem = m - n;
    
    cout << max(n, rem) << endl;
    
    return 0;
}
