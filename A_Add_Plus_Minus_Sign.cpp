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

        vector<char> ch;

        int cnt = 0;

        for(int i = 1; i<n; i++)
        {
            if(s[i] == '1')
            {
                cnt++;
                if(cnt % 2 == 1) ch.push_back('-');
                else ch.push_back('+');
            }else{
                ch.push_back('+');
            }
        }

        for(auto it : ch) cout << it ;
        cout << endl;    
        
    }
    
    return 0;
}
