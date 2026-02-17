#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n; cin >> n;
    int a[n];

    for(int i = 0; i<n; i++) cin >> a[i];

    int cnt = 1;

   vector<int> ans;

    for(int i = 0; i<n-1; i++)
    {
        if(a[i+1] == 1) 
        {
            ans.push_back(a[i]);  // ager shirir length     
        }
    }

    ans.push_back(a[n-1]); // shesh shirir length

    cout << ans.size() << endl;
    for(auto it : ans) cout << it << " " ;

    cout << endl;

    




    
    return 0;
}
