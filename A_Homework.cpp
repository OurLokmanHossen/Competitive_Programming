#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n ; cin >> n;
        string a; cin >> a;

        int m; cin >> m;
        string b, c; cin >> b >> c;

        for(int i = 0; i<m; i++)
        {
            if( c[i] == 'D')
            {
                a += b[i];
            }
            else a = b[i] + a;
        }

        cout << a << endl;
        
    }
    
    return 0;
}
