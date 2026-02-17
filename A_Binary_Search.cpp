#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n, k; cin >> n >> k;

    vector<int > a(n);

    for(int i = 0; i<n; i++) cin >> a[i];


    while(k--)
    {
        int k; cin >> k;

        int l = 0, r = n-1;

        bool found = false;

        while(l<=r)
        {
           int mid = (l+r)/2;
            if(a[mid] == k) 
            {
                found = true;
                break;
            }

            else if(a[mid] < k) l = mid + 1;
            else r = mid - 1 ;
        }

        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
