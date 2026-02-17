#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
   

        int n, x, y; cin >> n >> x >> y;

        int ok = y / x;
        int ve = n / ok;

        if(n % ok == 0) cout << ve << endl;
        else cout << ve + 1 << endl;

    return 0;
}
