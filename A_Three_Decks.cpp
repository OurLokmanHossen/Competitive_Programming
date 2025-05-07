#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int a, b , c; cin >> a >> b >> c;

       int x = b - a;
       a += x;
       c -= x;

       if( a > c) {
       cout << "NO" << endl;
       continue;
        }
       
        int y = c- a;
        if(y % 3 ==0 ) cout << "YES" << endl;
        else cout << "NO" << endl;

    }


    return 0;
}