#include <bits/stdc++.h>
using namespace std;

int main(){

   double n; 
   int cnt = 0;
   
   for(int i = 0; i<6; i++)
   {
       
       cin >> n;
       
       if(n > 0)
       {
           cnt++;
       }
   }
   
   cout << cnt<< " valores positivos" << endl;

    return 0;
}
