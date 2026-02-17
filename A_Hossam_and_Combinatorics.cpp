#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int mn = a[0], mx = a[n-1];

        int res = mx - mn;

        if(mn == mx) 
        {
            cout << 1LL * n * (n-1) << endl;
        }
        else{

        int cntMin = 0, cntMax = 0;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] == mn) cntMin++;

            else if(a[i] == mx) cntMax++;
        }
        cout << 1LL * cntMax * cntMin * 2 << endl;
    }
       
    }
    
    return 0;
}
