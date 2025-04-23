#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >> t;
    while(t--)
    {
        int n, m, l, r ; 
        cin >> n >> m >> l >> r;

        int lp , rp;
        rp = min(m,r);
        lp = rp-m;
        cout << lp << " " << rp << endl;
   
    }
    return 0;
}