#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    double x , p ; cin >> x >> p;

    double bp = (p * 100 ) / (100 - x);

    cout << fixed << setprecision(2) << bp << endl;

    return 0;
}