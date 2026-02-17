#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int n, k;  cin >> n >> k;

    int a[n];

    for(int i = 0; i<n ; i++) cin >> a[i];

    sort(a, a+n);

    for(int i = 0; i < n -2 ; i++)
    {
    
        int l = i + 1;
        int r = n - 1 ;

        while( l < r)
        {

            int s = a[i] + a[l] + a[r]; 

            if( s == k)
            {
                cout << i+1 << " " << l+1 << " " << r+1 << endl;
                return 0;
            }
            else if( s > k) r--;
            else l++;
        }
      
    }

    cout << "IMPOSSIBLE" << endl;

    
    return 0;
}
