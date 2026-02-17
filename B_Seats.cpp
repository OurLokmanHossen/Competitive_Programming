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

        s = '0' + s;

        int ans = count(s.begin(), s.end(), '1');

        int cnt = 0;

        n += 1;

        for(int i = 0; i<n; i++)
        {
           
            if(s[i] == '1') {cnt = 0; continue;}
            else cnt++;
            if(cnt == 3) ans++, cnt = 0;
        }

        if(cnt > 1) ans++;

        cout << ans << endl;   
        
    }
    
    return 0;
}
