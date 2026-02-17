#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();


    set<int> st;

    int q; cin >> q;

    while(q--)
    {

    string type; cin >> type;
    int x; cin >> x;
    

    if(type == "insert")
    {
       auto it = st.insert(x);
    }

    else if(type == "find")
    {
        auto it1 = st.find(x);

    if(it1 != st.end()) cout << "found" << endl;
    else cout << "not found" << endl;
    }

    else if(type == "lower_bound")
    {
        auto it2 = st.lower_bound(x);

    if(it2 != st.end()) cout << *it2 << endl;
    else cout << -1 << endl;
    }

     else if(type == "upper_bound")
    {
        auto it3 = st.upper_bound(x);

    if(it3 != st.end()) cout << *it3 << endl;
    else cout << -1 << endl;
    
    }
}

    return 0;
}
