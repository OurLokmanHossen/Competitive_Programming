#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

    int n; cin >> n;

    ll fact = 1;

    for(int i = 1; i<=n; i++)
    {
        cout << i << " ";
        fact = fact * i;
        cout << fact << endl;
    }

    return 0;
}