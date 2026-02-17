#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

void solve() {

    string s; cin >> s;

    bool flag = true;

    int n = s.size();

    for(int i = 0 ; i<n; i++)
    {
        if(s[i] != s[n-1-i]){
            flag = false;
            break;
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;


}

int main() {
    fastio();
    int t = 1; //cin >> t;
    while (t--) solve();
}
