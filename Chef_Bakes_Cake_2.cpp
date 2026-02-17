#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;
        
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) cin >> b[i];

        int aa, bb =0;

        for(int i = 0; i<n; i++)
        {

         if(a[i]>= b[i])
         {
            aa = (a[i] - b[i]);
            bb += aa;
         }


        }

         cout << bb << endl;


        
    }
    
    return 0;
}
