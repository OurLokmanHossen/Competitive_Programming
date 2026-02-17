#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n, q;
    cin >> n >> q;

    vector<int> a(n);

    for(int i = 0; i<n ; i++) cin >> a[i];

    sort(a.begin(), a.end());

    a.erase(unique(a.begin(), a.end()), a.end());
 
    while(q--)
    {

        int x ; cin >> x;

        int less = lower_bound(a.begin(), a.end(), x) - a.begin();
        int more = a.end() - upper_bound(a.begin(), a.end(), x);

        cout << less << " " << more << endl;
    }
  
    return 0;
}
