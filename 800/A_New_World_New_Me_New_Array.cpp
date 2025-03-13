#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

     int t;
     cin >> t;

     while(t--){

        int n, k, p;
        cin >> n >> k >> p ;

       int minOperation = abs(k)/abs(p);

        if(abs(k) % abs(p) ) 
        minOperation++;

        if(minOperation>n)
        cout << -1 << endl;
        else
        cout << minOperation << endl;
     }

    return 0;
}