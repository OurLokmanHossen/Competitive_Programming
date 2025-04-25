#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long a ; cin >> a;
    long long i, j , pe;

    long long minPe = LLONG_MAX; 

    for(i = 1; i * i <= a; i++)
    {
        if( a % i == 0) // i = length , j = width
        {
            j = a / i ;
            pe = 2 * (i + j);
            minPe = min(minPe, pe);
        }
    }

    cout << minPe << endl;

    return 0;
}