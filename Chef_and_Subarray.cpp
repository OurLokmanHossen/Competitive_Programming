#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i<n ;i++) cin >> a[i];

        int cnt = 0, mx = 0;

        for(int i = 0; i<n ;i++)
        {
            if(a[i] == 0) cnt = 0;
            else {
                cnt++;
                mx = max(cnt, mx);
            }
        }

        cout << mx << endl;
    
    return 0;
}
