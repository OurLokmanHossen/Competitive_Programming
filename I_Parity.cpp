#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    int caseNo = 1;
    while(t--)
    {
        cout << "Case " << caseNo << ": ";
        caseNo++; 
        int n; cin >> n;
        if(n % 2 == 0) cout << "even" << endl;
        else cout << "odd" << endl;
    }

    return 0;
}