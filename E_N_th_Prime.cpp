#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
   int n; cin >> n;

   int end = 1e7;

   vector<bool> isPrime(end+1, true);
   vector<int> cnt;

   isPrime[0] = isPrime[1] = false;

   for(int i = 2; i*i <= end; i++)
   {
     if(isPrime[i])
     {
        
        for(int j = i * i ; j<= end; j+=i)
        {
            isPrime[j] = false;
        }
        
     }
    
   }

   int q; cin >> q;
   while(q--)
   {
       int x; cin >> x;

  
      if(isPrime[x]) 
      {
        cnt.push_back(x);
      }

  cout << cnt[x-1] << endl;
   }
    
    return 0;
}
