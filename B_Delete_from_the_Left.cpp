#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    string s, t; cin >> s >> t;

    int i = s.size(); // length
    int j = t.size();

    int ans = 0;

    while(i > 0 && j > 0 && s[i-1] == t[j-1])
    {
       ans++;
       i--;
       j--;
    }

    cout << (s.size() - ans) + (t.size() - ans) << endl;
    
    return 0;
}
