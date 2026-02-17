#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n; 
    int m; cin >> m;

    int a[n];


    for(int i = 0; i<n;  i++)
    {
       cin >> a[i];
    }

    sort(a, a+n, greater<int>());

    int s =0, c = 0;

    for(int i = 0; i<n; i++)
    {
         s += a[i];
         c++;

         if(s >= m) break;

    }

    cout << c << endl;


    return 0;
}