#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--)
    {
        int a, b ; cin >> a >> b;

        int diff = abs( a - b );
        int minMoves = ( diff + 10 - 1 ) / 10; 
       
       // ceil(m / x) = (m + x - 1) / x
        

        cout << minMoves << endl;
    }

    return 0;
}