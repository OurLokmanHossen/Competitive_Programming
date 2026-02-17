#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        vector<int> a(n);

        for(int i = 0; i<n; i++) cin >> a[i];

        if(is_sorted(a.begin(), a.end())) {cout << 0 << endl; continue;}
        if(is_sorted(a.rbegin(), a.rend())) {cout << 0 << endl; continue;}

        else cout << n-2 << endl;
        
    }
    
    return 0;
}
