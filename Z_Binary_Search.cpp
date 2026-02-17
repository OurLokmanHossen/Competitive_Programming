#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n, q; cin >> n >> q;

    vector <int > a(n);

    for(int i = 0; i<n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    while(q--)
    {
        int x; cin >> x;

        int l = 0, r = n-1;

        bool flag = false;

        while(l<=r)
        {
           int mid = (l + r) / 2;

            if(a[mid] == x)
            {
              flag = true; break;
            } 
            else if(a[mid] < x) l = mid +1;
            else r = mid -1;
        }

        if(flag) cout << "found" << endl;
        else cout << "not found" << endl;

    }
    
    return 0;
}
