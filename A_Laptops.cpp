#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

   int a, b;
  

   for(int i = 0; i<n; i++)
   {
        cin >> a >> b;

        if(a < b) 
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
        
   }

   cout << "Poor Alex" << endl;

    return 0;
}