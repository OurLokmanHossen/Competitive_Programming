#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long a, b; cin >> a >> b;
    long long x, y; cin >> x >> y;

    long long dif = abs(a-x);
    long long diff = abs(b-y);

    cout << max(dif, diff) << endl;
    

    return 0;
}