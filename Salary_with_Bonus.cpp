#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string name ; cin >> name;

    double salary ; cin >> salary;

    double totalSold ; cin >> totalSold;

    cout <<"TOTAL = R$ " << fixed << setprecision(2) << salary + totalSold * 0.15 << endl;

    return 0;
}