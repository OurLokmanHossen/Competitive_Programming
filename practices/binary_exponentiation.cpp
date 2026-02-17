#include <bits/stdc++.h>
using namespace std;

int findPower(int a, int b )
{
   if( b == 0) return 1;
   int half = findPower(a, b/2);
   int result = half * half;

   if(b % 2 == 1)
   {
     result = a * result;
   }
   return result;
}

int binaryExIter(int a, int b)
{
   int ans = 1;
   while(b)
   {
      if(b&1)
      {
         ans = ans * a;

      }

      a = a * a;
      b/=2;
   }
   return ans;
}

int main(){



   int a, b; cin >> a >> b;

   cout << findPower(a,b) << endl;
   cout << binaryExIter(a,b) << endl;

    return 0;
}