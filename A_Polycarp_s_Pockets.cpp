#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n; cin >> n;

    int a[n];

    for(int i = 0; i<n; i++) cin >> a[i];

    map<int, int> freq;

    int mx = 0;

    for(auto x : a)
    {
        cin >> x; 
        freq[x]++;
        mx = max(freq[x],mx);
    }

    cout << mx << endl;
    
    return 0;
}
