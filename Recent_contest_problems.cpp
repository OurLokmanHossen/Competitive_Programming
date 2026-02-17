#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

      int n; cin >> n;

    int s1 = 0, s2 = 0; 
      while(n--)
      {
        string s; cin >> s;
        if(s == "START38") s1++;
        else s2++; 
      }

       cout << s1 << " " << s2 << endl;
        
    }
    
    return 0;
}
