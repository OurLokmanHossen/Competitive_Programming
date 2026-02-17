#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, k; cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0; i<n; i++) cin >> a[i];
        for(int i = 0; i<n; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        for(int i = 0; i<k; i++)
        {
          if(a[i]<b[i]) 
          {
            swap(a[i],b[i]);
          }

        }

        int s = 0;

        for(int i = 0; i<n ; i++)
        {
            s += a[i];
        }

        cout << s << endl;
   
        
    }
    
    return 0;
}
