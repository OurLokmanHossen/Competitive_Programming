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

       int cnt = 0;

       bool found = false;
       for(int i = 0; i<n; i++)
       {
         if(s[i] == '0') 
         {
            found = true;
         }
         else if(found) 
         {
            if(s[i] == '1') cnt++;
         }
      }

      cout << cnt << endl;

    }
       
    
    return 0;
}
