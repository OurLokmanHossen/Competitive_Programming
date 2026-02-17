#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        string s; cin  >> s;

        int n = s.size();

        int cnt = 0;

        if(s[0] == 'u') 
        {
            s[0] = 's';
            cnt++;
        }
        
        if(s[n-1] == 'u') 
        {
            s[n-1] = 's';
            cnt++;
        }

        for(int i = 1; i<n-1; i++)
        {
            if(s[i] == 'u' && s[i-1] == 'u')
            {
                cnt++;
                s[i] = 's';
            }
        }

        cout << cnt << endl;

        
    }
    
    return 0;
}
