#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

     int t; cin >> t;
     while(t--)
     {
        int n ; cin >> n;
        int a[n];

     for(int i = 0; i < n ; i++)
       {
        cin >> a[i];
       }

       int bSpace = 0, maxBSpace = 0;

       for(int i = 0; i< n ; i++)
       {
        if(a[i] == 0)
        {
            bSpace++;
            maxBSpace = max(maxBSpace, bSpace);
        }
        else 
        {
            bSpace = 0;
        }
       }

       cout << maxBSpace << endl;

     }
    
   

    return 0;
}