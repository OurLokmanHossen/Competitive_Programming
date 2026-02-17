#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, m; cin >> n >> m;

        string s; cin >> s;

        int a = 0, b = 0;

        for(int i = 0; i<m ; i++)
        {

            if(s[i] == '1')
            {
              a++;
            }
            else b++;
        }

        int res = abs (a-b);
        int rem = n - m; 

        if(rem >= res && n % 2 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;   
        
    }
    
    return 0;
}
