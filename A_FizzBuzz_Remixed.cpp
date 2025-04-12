#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

     int t;
     cin >> t;
     while(t--){
        int n;
        cin >> n;
        int printFizzbuzz = n/15 * 3;

        for(int i = 0 ; i <= n ; i++)
        {
            
           printFizzbuzz += (i%3 == i%5);
        }
        cout << printFizzbuzz << endl;
     }


    return 0;
}