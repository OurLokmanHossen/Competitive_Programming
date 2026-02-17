#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n; cin >> n;

    vector<int> a(n);

    for(int i= 0; i<n; i++) cin >> a[i];

    int s = 0;

    for(int i = 0; i<n; i++) 
    {
        s += a[i];
    }

    if(s % 4 == 0) cout << s/4 << endl;
    else cout << (s/4)+1 << endl;

    
    return 0;
}
