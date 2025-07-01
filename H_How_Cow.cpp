#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    int caseNo = 1;

    while(t--)
    {
        cout << "Case " << caseNo << ": " << endl;
    caseNo++;

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int m; cin >> m;
    while(m--)
    {
        int x, y; cin >> x >> y;

        if(x > x1 && x < x2 && y > y1 && y < y2)
        cout << "Yes" << endl;
        else cout << "No" << endl;

    }
    }
    return 0;
}