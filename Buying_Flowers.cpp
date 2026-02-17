#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        if(n % 3 == 0) cout << (n/3) * 5 << endl;
        else if(n % 3 == 2) cout << (n/3) * 5 + 4 << endl;
        else if(n % 3 == 1) cout <<(n / 3 -1) * 5 + 4 + 4 << endl;
     
    }
    
    return 0;
}
