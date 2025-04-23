#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int r, b;
    cin >> r >> b;

    cout << min(r,b) << " " << (abs(r - b)/2) << endl;

    return 0;
}