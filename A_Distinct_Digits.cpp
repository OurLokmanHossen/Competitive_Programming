#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int l, r; cin >> l >> r;

    for(int i = l; i<= r; i++)
    {
        string str = to_string(i);

        set<char> st;

        bool found = true;

        for(char c : str)
        {
            if(st.count(c))
            {
                found = false;
                break;
            }
            st.insert(c);
        }

        if(found) 
        {
            cout << str << endl; return 0;
        }
    }

    cout << -1 << endl;
    
   

    return 0;
}
