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

        string ss = s;

        sort(ss.begin(), ss.end());

        int op = 0;

        for(int i = 0; i<n; i++)
        {
            if(ss[i] != s[i]) op++;
        }
        
        cout << op/2 << endl;
    }
    
    return 0;
}
