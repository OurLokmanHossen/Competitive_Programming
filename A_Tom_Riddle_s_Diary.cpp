#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n ; cin >> n;
    
    set<string> st;

    for(int i = 0; i<n ;i++)
    {
        string s; cin >> s;

        if(st.find(s) != st.end())
        {
            cout << "YES" << endl;
        }

        else {
            cout << "NO" << endl;
            st.insert(s);
        }
    }

    

    
    return 0;
}
