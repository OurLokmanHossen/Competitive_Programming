#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n, c; cin >> n >> c;

        vector<int> a(n);

        for(int i = 0; i<n; i++) cin >> a[i];

       sort(a.begin(), a.end());

       int cnt = 0, minC = 0;

       for(int i = 0; i<n; i++)
       {

        if(a[i] < c) minC++;

        for(int i = 0; i<n ; i++)
        {
            if(a[i] == c && minC >= 1)
        {
            c++;
            cnt++;
        }
        }

     
       }
   cout << cnt << endl;
      
        
    }
    
    return 0;
}
