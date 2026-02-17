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

        char last = s[n-1];

        int cnt = 0;

          for(int i = 0; i<n; i++) 
        {
            if(s[i] == last) cnt++;
        }

        cout << n - cnt << endl;
      
        
    }
    
    return 0;
}
