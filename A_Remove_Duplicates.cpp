#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    vector<int> a(n), ans;

    for(int i = 0; i<n; i++) cin >> a[i];

    set<int> st;

    for(int i = n-1; i>= 0; i--)
    {
        if(st.count(a[i]) == 0 )
        {
            ans.push_back(a[i]);
            st.insert(a[i]);
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;

    for(auto it : ans) cout << it << " ";
    cout << endl;


    
    return 0;
}