#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

       vector<int> a(3), b(3);

        for (int i = 0; i < 3; i++) cin >> a[i];
        for (int i = 0; i < 3; i++) cin >> b[i];

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        int alice = 0, bob = 0;

        for (int i = 0; i < 3; i++) {
            alice = (alice * 10) + a[i];  
            bob   = (bob * 10)   + b[i];  
        }

        if (alice > bob) cout << "Alice" << endl;
        else if (bob > alice) cout << "Bob" << endl;
        else cout << "Tie" << endl;

       
    }
    
    return 0;
}
