#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
     int n; cin >> n; 
    string s; cin >> s;

    for(int i = 0; i<n-1; i++)
    {
        
        if(s[i] == s[i+1])
        {
            cout << s[i] << s[i+1] << endl;
            return 0;
        }
    }

    cout << "CLEAN" << endl;
    
    return 0;
}
