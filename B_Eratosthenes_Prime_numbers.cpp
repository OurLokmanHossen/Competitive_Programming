#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    int t; cin >> t;

    while(t--)
    {
          int n; cin >> n;

   vector<bool> isPrime(n+1, true);

   isPrime[0] = isPrime[1] = false;

   int cnt = 0;

   for(int i = 2; i*i <= n; i++)
   {
     if(isPrime[i])
     {
        
        for(int j = i * i ; j<= n; j+=i)
        {
            isPrime[j] = false;
        }
     }
   }

   bool found = false;

   for(int i = 1; i <= n; i++)
   {
      if(isPrime[i])
      {
       found = true;
       cnt++;
        
      }
   }

   cout << cnt << endl;
    }


    return 0;
}
