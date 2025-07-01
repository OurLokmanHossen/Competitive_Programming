#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];

        int mi = INT_MAX;
        int minOp = 0;

        for(int i = 0 ; i<n; i++) 
        {
            cin >> a[i];
        }

        for(int i = 0 ; i<n; i++)
        {
            mi = min(mi, a[i]);

            if(a[i] != mi)
            {
              a[i] = mi;

              minOp++;
            }

        }
         
   cout << minOp << endl;
       
    }

    return 0;
}