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

        int mex = 0;

        while(st.count(mex))
        {
              mex++;
        }
      while(1)
      {
        cout << mex << endl;
        int x; cin >> x;
        mex = x;

        if(x == -1) break;
      }
       
        
    }
    
    return 0;
}
