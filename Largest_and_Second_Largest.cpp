#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >> t;

    while(t--)
    {
        int n; cin >> n;

    int a[n];

    int maxSum = 0;

    for(int i = 0; i<n; i++) cin >> a[i];
     
    for(int i = 0; i<n; i++)
    {
      for(int j = 0; j<n; j++)
      {
        if(a[i] != a[j])
        {
            maxSum =max(a[i] + a[j], maxSum);
        }
      }
    }
        
   cout << maxSum << endl;
    }

    return 0;
}