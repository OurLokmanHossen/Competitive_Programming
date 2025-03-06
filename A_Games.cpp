#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

   int n,  guest =0;
   cin >> n;

   int h[n], a[n];
      
   //input
   for(int i = 0; i<n ; i++)
   {
       cin >> h[i] >> a[i];
   }
       //count guest
        for(int i = 0; i < n; i++)
        {
           for(int j = 0; j<n ; j++)
           {
            if(h[i]== a[j])
            {
                guest++;
            }
        
           }
        }
   
   cout << guest << endl;


    return 0;
}