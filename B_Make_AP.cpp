#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >> t;
    while(t--)
    {
        int a, b , c;
       
            cin >> a >> b  >> c;

          int x =  2*b - c;
          int y = 2*b - a;

          bool result = false;

          if(x> 0 && x % a == 0) result = true;
          else if((a+c) % (2 * b) == 0) result = true;
          else if(y>0 && y % c == 0) result = true;

          if(result)
          cout << "YES" << endl;
          else 
          cout << "NO" << endl;
          
    }

    return 0;
}