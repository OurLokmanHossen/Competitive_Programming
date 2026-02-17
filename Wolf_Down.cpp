#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        string s ; cin >> s;

        int cnt = 0;

        for(char c : s)
        {
            if(c == '0') cnt++;
            else break;
            
        }

        cout << cnt << endl;

       
        
    }
    
    return 0;
}
