#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    string s; cin >> s;

    bool found = false;

    for(char c : s)
    {
       if(c == 'H' || c == 'Q' || c == '9')
       {
         found = true;
         break;

       }     
        
    }

    if(found) cout << "YES" << endl;
    else cout << "NO" << endl;
    
   
    
    return 0;
}
