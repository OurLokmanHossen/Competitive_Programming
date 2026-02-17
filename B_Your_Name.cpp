#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        string s, t;
         cin >> s >> t;

         sort(s.begin(),s.end());
         sort(t.begin(),t.end());

         bool found = true;

         for(int i = 0; i<n; i++)
         {
            if(s[i] != t[i])
            {
                found = false;
            }
         }

         if(found) cout << "YES" << endl;
         else cout << "NO" << endl;

        
    }
    
    return 0;
}
