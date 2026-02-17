#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    int caseNo = 1;
    while(t--)
    {
        int p, s, r; cin >> p >> s >> r;

        cout << "Case " << caseNo << ": ";
        caseNo++;

        if( s == p && r != 1) cout << "No" << endl;
        else cout << "Yes" << endl;
    }




    return 0;
}