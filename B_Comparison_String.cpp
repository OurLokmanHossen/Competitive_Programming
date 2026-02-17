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

        int c = 1;

        int mx = 1;

        for(int i = 0; i<n-1; i++)
        {
            if(s[i] == s[i+1]) 
            {
                c++;
               
            }
           
            else 
            {
                c = 1;
            }


             mx= max(mx,c);
        }

        cout << mx+1 << endl;

        
    }
    
    return 0;
}
