#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    int caseNO = 1;

    while(t--)
    {
       
       double r; cin >> r;

       cout << "Case " << caseNO << ": " ;
       caseNO++;

       const double pi = 2 * acos(0.0);

        double area = pi * r * r;

        double sArea = 2 * r * 2 * r;

        cout << fixed << setprecision(2) << sArea - area << endl;

    }

    return 0;
}