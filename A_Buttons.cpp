#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

   long long t; cin >> t;

    while(t--){
        
      int a, b , c ; cin >> a >> b >> c;

    if (a > b) cout << "First" << endl;
    else if (a < b) cout << "Second" << endl;
    else
    {
        if(a == b & c % 2 == 1) 
         cout << "First" << endl;
        else cout << "Second" << endl;
    }
 
    }

    return 0;
}