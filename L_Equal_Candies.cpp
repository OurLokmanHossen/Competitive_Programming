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

        sort(a.begin(), a.end());

        int need = 0;
        int mi = a[0];

        for(int i = 1; i<n ; i++)
        {
            need += abs(mi - a[i]);
        }
        
        cout << need << endl;
        
    }
    
    return 0;
}
