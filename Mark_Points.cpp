#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        string s; cin >> s;

        string t = s;

        for(int i = 1; i<n-1; i++)
        {
            if(s[i-1] == '1' && s[i] == '1' && s[i+1] == '1')
            {
                t[i-1] = '0';
                t[i] = '0';
                t[i+1] = '0';
            }
        }

       bool found = true;

       for(char c : t)
       {
         if(c == '1') 
         {
            found = false; break;
         }
       }

       if(found) cout << "Yes" << endl;
       else cout << "No" << endl;
        
    }
    
    return 0;
}
