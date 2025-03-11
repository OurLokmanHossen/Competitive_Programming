#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, group =1;
    cin >> n;

    string previousMag, currentMag;
    cin >> previousMag;

   for(int i =1; i< n; i++)
   {
     cin >> currentMag;
    
    if( previousMag != currentMag)
    {
      group++ ;
      previousMag = currentMag;
    }

   }
   cout << group << endl; 
    return 0;
}