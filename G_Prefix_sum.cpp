#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;

        vector<long long > a(n),prefix(n);

        for(long long i = 0 ; i<n; i++) cin  >> a[i];

        prefix[0] = a[0];

        for(long long i = 1 ; i< n; i++)
        {
          prefix[i] = prefix[i-1] + a[i];
        }

        long long q; cin >> q;
        while(q--)
        {
            long long l, r; cin >> l >> r;

            l--; r--;

            if(l == 0) cout << prefix[r] << "\n";
            else cout << prefix[r] - prefix[l-1] << "\n";

            
        }
    }

    return 0;
}