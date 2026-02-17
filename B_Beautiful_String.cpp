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

      vector<int> a;

        for(int i = 0; i<n; i++)
        {
            if(s[i] == '1')
            {  a.push_back(i+1);
            }
        }

        cout << a.size() << endl;
        for(auto it : a)
        {
            cout << it << " ";
        }
      cout << endl;
        
    }
    
    return 0;
}
