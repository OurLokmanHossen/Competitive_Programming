#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
   int n; cin >> n;

   int a[n];

   for(int i = 0; i<n; i++) cin >> a[i];

   ll maxi = LLONG_MIN;
   ll sum = 0;

   for(int i = 0; i<n; i++)
   {
        sum += a[i];
        maxi = max(maxi, sum);

        if(sum < 0)
        {
            sum = 0;
        }
      }

   cout << maxi << endl;
    
    return 0;
}
