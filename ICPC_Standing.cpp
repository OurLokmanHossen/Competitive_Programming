#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    int caseNO = 1;

    while(t--)
    {
        cout << " Case " << caseNO << ": ";
        caseNO++;
        
        int n,p,r; cin >> n >> p >> r;
        
        if(n == p && r != 1) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}