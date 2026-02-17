#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        string s; cin >> s;

        set<char> st;

        for(int i = 0; i<s.size(); i++)
        {
            if(i+1 < s.size() && s[i] == s[i+1]) i++;
            else st.insert(s[i]);
        }

        for(auto it : st) cout << it ;
        cout<< endl;

        
    }
    
    return 0;
}
