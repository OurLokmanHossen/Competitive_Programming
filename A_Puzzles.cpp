#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n, m; cin >> n >> m;

    vector<int> a(m);

    for(int i = 0; i<m; i++) cin >> a[i];

    sort(a.begin(),a.end());

    int mi = INT_MAX;

    for(int i = 0; i<= m-n; i++)
    {
       int diff = a[i+n-1] - a[i];
       mi = min(mi, diff);
    }

    cout << mi << endl;

    return 0;
}
