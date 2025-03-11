#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

  int t; cin >> t;

  int n, a[n];
  while(t--)
  {
    
    for (int i =1 ; i< n-1; i++)
    {
         cin >> a[i]; 

         if(a[i] != a[i+1])
         {
            cout << i << endl;
         }
    }
  }



    return 0;
}