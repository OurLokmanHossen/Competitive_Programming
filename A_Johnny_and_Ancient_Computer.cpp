#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t;
    cin >> t;
    while (t--) {

        ll a, b;
        cin >> a >> b;

        
        int pa = 0, pb = 0;

        while (a % 2 == 0) {
            a /= 2;
            pa++;
        }
        while (b % 2 == 0) {
            b/= 2;
            pb++;
        }

        if (a != b) {
            cout << "-1" << endl;
            continue;
        }

        int diff = abs(pa - pb);
        int ans = diff / 3 + (diff % 3) / 2 + (diff % 3 % 2);

        cout << ans << endl;
    }
    
    return 0;
}
