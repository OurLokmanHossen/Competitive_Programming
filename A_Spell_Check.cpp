#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n ; cin >> n;
        string s; cin >> s;

        sort(s.begin(), s.end());

        string need = "Timur";
        sort(need.begin(), need.end());

        if(n == 5 && s == need) cout << "YES" << endl;
        else cout << "NO" << endl;
    
    }
    
    return 0;
}
