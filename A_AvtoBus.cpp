#include <iostream>
#include <cmath> 
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--) {

        long long n; cin >> n;

        if(n % 2 == 1 || n < 4) 
        {
            cout << -1 <<endl;
        }
        else
        {
          long long mx, mi ;
          if(n % 6 == 0)
          {
            mi = n/6;
          }
          else
          {
            mi =( n/6)+1;
          }

          mx = n/4;
          cout << mi << " " << mx << endl;
        }
    }
    return 0;
}