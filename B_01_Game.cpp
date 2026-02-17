#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
        
        string s; cin >> s;
        int n = s.size();

        int o = 0, e = 0;

        for(int i = 0; i<n; i++)
        {
            if(s[i] == '1') o++;
            else e++;
        }

      
        int res =  2* min(o,e);
        int ans = res / 2;
        if(ans % 2 == 0) cout << "NET" << endl;
        else cout << "DA" << endl;

        

        
    }
    
    return 0;
}
