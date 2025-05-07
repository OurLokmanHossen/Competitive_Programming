#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a, b; cin >> n >> a >> b;
    int c[n]; 

    for(int i = 1; i <= n; i++) 
    {
        cin >> c[i];

    }

    for(int i = 1; i<=n;i++)
    {
        if(a+b == c[i])
        {
           cout << i << endl;
           break;
        }
    }

    return 0;
}