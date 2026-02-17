#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
   
    int n; cin >> n;

    vector<int> v(n);

    for(int i = 0; i<n ; i++) cin >> v[i];

    int q; cin >> q;

    while(q--)
    {
        int x; cin >> x;

         int lb = lower_bound(v.begin(), v.end(), x) - v.begin();

        if(v[lb] == x) cout << "Yes " << lb+1 << endl;
        else cout << "No " << lb+1 << endl; 

        
    }
    
    return 0;
}
