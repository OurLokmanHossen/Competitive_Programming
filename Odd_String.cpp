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

        sort(s.begin(), s.end());

        int cnt = 0;

         map<char,int> mp;

        for(char c : s) mp[c]++;

        bool f = false;

        for(auto it : mp)
        {
            if(it.second >= 3) f = true;
        }

        if(!f) cout << "YES" << endl;
        else cout << "NO" << endl;
         
    }
    
    return 0;
}
