#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
   int n; cin >> n;

   int a[n];

   for(int i = 0; i<n; i++) cin >> a[i];

   int oddcnt = 0, evencnt = 0;
   int oddlast = -1, evenlast = -1;

   for(int i = 0; i<n; i++)
   {
     if(a[i] % 2 == 0) 
     {
        evencnt++;
        evenlast = i + i;
     }
     else 
     {
        oddcnt++;
        oddlast = i + 1;
     }
   }

   if(evencnt == 1) cout << evenlast << endl;
   else cout << oddlast << endl;


    return 0;
}
