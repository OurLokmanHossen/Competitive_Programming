#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
    
      vector<string> a(6);
      for(int i = 0; i<6 ; i++) cin >> a[i];

      bool f = false;

      for(int i = 0; i<4; i++)
      {
         if(a[i] == "W" && a[i+1] == "W" && a[i+2] == "W") 
         {
            f = true; break;
         }
      }

      if(f) cout << "YES" << endl;
      else cout << "NO" << endl;
        
    }
    
    return 0;
}
