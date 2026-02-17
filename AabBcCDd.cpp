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

        for(char &c : s)
        {
            c = tolower(c);
        }

        // cout << s << endl;

        vector<int > v;

        map<char, int> mp;

       int mxfreq = 0, sec = 0;

        for(char c : s)
        {
            mp[c]++;
        }

        for(auto it : mp)
        {
            v.push_back(it.second);
        }

        sort(v.rbegin(), v.rend());

        // for(auto it : v)
        // {
        //     cout << it << " ";
        // }
        // cout << endl;

      if(v.size() == 1) cout << v[0] << endl;
      else cout << v[0] + v[1] << endl;



    
    }
    
    return 0;
}
