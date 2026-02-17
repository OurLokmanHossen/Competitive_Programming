#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        string s, t; cin >> s >> t;

        int n = s.size(); 
        int m = t.size();

        int g = __gcd(n,m);

        int l = (n * m) / g;

        string newStr ;
        string newtStr ;

        for(int i = 0; i<l/n; i++)
        {
            newStr += s;
        }

        for(int i = 0; i<l/m; i++)
        {
            newtStr += t;
        }


        if(newStr == newtStr) cout << newStr << endl;
        else cout << -1 << endl;
 

        
    }
    
    return 0;
}
