#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int a , b , c ; cin >> a >> b >> c;

    cout << max({ a+b+c, a+(b*c), a*(b+c), (a*b*c), (a+b)*c});

    return 0;
}

// 1+2*3=7
// 1*(2+3)=5
// 1*2*3=6
// (1+2)*3=9