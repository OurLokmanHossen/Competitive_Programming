#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    if(n % 3 == 2) cout << n+1 << endl; 
    else if(n % 3 ==1) cout << n-1 << endl;
    else cout << n << endl;

    return 0;
}