#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main() {
    fastio();
    
    int t; 
    cin >> t;

    while(t--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;

        map<char,int> mp;

        for(char c : s) mp[c]++;

        bool found = false;

        for(auto it : mp)
        {
            if(it.second >= 2) found = true;
           
        }

        if(found) cout << "Yes" << endl;
        else cout << "No" << endl;

      
    }

    return 0;
}
