#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n; cin >> n;

    vector<int> a(n), prefix(n);
    
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    prefix[0] = a[0];
    for(int i = 1 ; i<n; i++)
    {
        prefix[i] = prefix[i-1] + a[i];
    }

    int q; cin >> q;
   while(q--) {

    int l, r; cin >> l >> r;
    if(l == 0) 
        cout << prefix[r] << endl;
    else 
        cout << prefix[r] - prefix[l - 1] << endl;
}

    return 0;
}
