#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int bgin = max(l1,l2);
    int end = min(r1, r2);

    if(bgin <= end) cout << bgin << " " << end << endl;
    else 
    cout << -1 << endl;


    return 0;
}