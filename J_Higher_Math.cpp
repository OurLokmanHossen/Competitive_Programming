#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    int caseNO = 1;
    while(t--)
    {
        
        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        sort(a,a+3);

        cout << "Case " << caseNO << ": ";
        caseNO++;

        if(a[0]*a[0] + a[1]*a[1] == a[2]*a[2]) 
        {
            cout << "yes" << endl;
        }
        else cout << "no" << endl;
    }

    return 0;
}