#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, a, b; 
        cin >> n >> a >> b;

        int mi = INT_MAX;

        for(int i = 0; i<n; i++)
        {
            int x, y;
            cin >> x >> y;

            int dif = abs(a-x) + abs(b-y);
            mi = min(dif,mi);
        }

        cout << mi << endl;
        
    }
    
    return 0;
}
