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

        set<int> s;
        for(int i = 0; i<n; i++) 
        {
            int x; cin >> x;
            s.insert(x);

        }

        int c = s.size();

        cout << *s.lower_bound(c) << endl;
        
    }
    
    return 0;
}
