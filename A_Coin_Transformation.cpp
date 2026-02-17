#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

   int t;
   cin >> t;
   
   while(t--)
   {

     long long n;  // 10^18 that is why long long 
     int maxCoin = 1;
     cin >> n;

       while (n>3)
       {
        n= n/4;
        maxCoin *= 2;
       }
       cout  << maxCoin << endl;
    }
    
    return 0;
}
