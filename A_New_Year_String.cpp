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

        bool f2026 = false;
       bool f2025 = false;


        for(int i = 0; i<n-3 ; i++)
        {
            if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '6')
            {
               f2026 = true;
            }
        }

        for(int i = 0; i<n-3 ; i++)
        {
            if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5')
            {
              f2025 = true;
               
            }
        }

       if(f2026) cout << 0 << endl;
       else if(!f2025) cout << 0 << endl;
       else cout << 1 << endl;

    
       

       

        
        
    }
    
    return 0;
}
