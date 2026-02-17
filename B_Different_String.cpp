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

        bool found = false;

        for(int i = 1; i<n; i++)
        {
            if(s[0] != s[i]) 
            {
            swap(s[i],s[0]);
            found = true;
            break;
           }
      }

        if(!found) cout << "NO" << endl;
        else
        {
            cout <<"YES"<< endl;
            cout << s << endl;
        }

        
        
    }
    
    return 0;
}
