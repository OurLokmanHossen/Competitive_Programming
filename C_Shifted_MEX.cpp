#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
       
        set<int> st;

        for(int i = 0; i<n; i++)
        {
            int x; cin >> x;
            st.insert(x);
        }

        // for(auto it : st) {cout << it << " ";}
        // cout << endl;

         vector<int> a(st.begin(),st.end());
        
        int cnt = 1;
        int mx = 1;

        for(int i = 1; i<a.size(); i++)
        {
           if(abs(a[i] - a[i-1]) == 1) cnt++;
           else cnt = 1;
           mx = max(cnt, mx);
        }

        cout << mx << endl;
       
    }
    return 0;
}
