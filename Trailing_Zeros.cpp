#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    long long cntZero = 0;

    while(n > 0)
    {
        n /= 5;
        cntZero += n;
    }

    cout << cntZero << endl;


    return 0;
}