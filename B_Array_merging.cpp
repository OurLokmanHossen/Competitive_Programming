#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main() {
    fastio();
    
    int t; 
    cin >> t;
    while (t--) {
      
        int n; 
        cin >> n;
        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        int mAsize = 2 * n + 1;

        vector<int> maxA(mAsize,0), maxB(mAsize, 0);

        int cnt1 = 1;

        for(int i = 0; i <n-1; i++)
        {
            if( a[i] == a[i+1]) cnt1++;
            else {
               maxA[a[i]] = max(cnt1, maxA[a[i]]);
               cnt1 = 1;
            }
        } 
        maxA[a[n-1]] = max(cnt1, maxA[a[n-1]]);


         int cnt2 = 1;

        for(int i = 0; i <n-1; i++)
        {
            if( b[i] == b[i+1]) cnt2++;
            else {
               maxB[b[i]] = max(cnt2, maxB[b[i]]);
               cnt2 = 1;
            }
        } 
        maxB[b[n-1]] = max(cnt2, maxB[b[n-1]]);

        int ans = 0; 

        for(int i = 0; i<mAsize ; i++)
        {
            ans = max(ans , maxA[i] + maxB[i]);
        }

        cout << ans << endl;

    }
    
    return 0;
}
