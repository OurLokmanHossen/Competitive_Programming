#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int a[n];

    int mi = INT_MAX;
    int ma = INT_MIN;

    int maxInd = -1, minInd =-1;

    for(int i = 0; i<n; i++) 
    {
        cin >> a[i];

       if(a[i]<mi)
       {
        mi = a[i];
        minInd = i;
       }

       if(a[i]>ma)
       {
        ma = a[i];
        maxInd = i;
       }

    }

    swap(a[minInd], a[maxInd]);


   for(int i = 0; i<n; i++)
   {
      cout << a[i] << " ";
   }


    return 0;
}