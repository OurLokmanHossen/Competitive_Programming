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

        map<int,int> mp;

        for(int i = 0; i<n; i++)
        {
            mp[s[i]]++;
        }

        for(int i = 0; i<n; i++)
        {
            cout << mp[s[i]] << endl;
        }


        
    }
    
    return 0;
}
