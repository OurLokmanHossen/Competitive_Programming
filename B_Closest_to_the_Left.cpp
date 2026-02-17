#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
   int n, k; cin >> n >> k;
   vector<int> a(n);

   for(int i = 0; i<n; i++) cin >> a[i];

   while(k--)
   {

    int x; cin >> x;

       int l = 0, r = n - 1;
       int ans = -1;

       while( l <= r) 
       {
         int mid = (l+r)/2;

         if(a[mid] <= x) 
         {
            ans = mid ;
            
            l = mid + 1;
         } else{
         r = mid - 1;
         }
       }

       if(ans == -1) cout << 0 << endl;
       else cout << ans+1 << endl;


   }
    
    return 0;
}
