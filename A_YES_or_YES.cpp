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

      int cnty = 0, cntn = 0;

      for(int i = 0; i<n; i++)
      {
          if(s[i] == 'Y' ) cnty++;
          else cntn++;
      }

      if(cntn == n ) { cout << "YES" << endl; continue; }

      if(cnty == 1) cout << "YES" << endl;
      else cout << "NO" << endl;

    }

     
    return 0;
}
