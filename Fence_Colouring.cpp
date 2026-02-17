#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        set<int> st;

        for(int i = 0; i<n; i++)
        {
            int x; cin >> x;

            st.insert(x);
        }

     if(st.count(1) > 0) cout << st.size() - 1 << endl;
     else cout << st.size() << endl;
       
        
    }
    
    return 0;
}
