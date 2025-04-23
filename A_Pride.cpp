#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n;

    int a[n];
    for(int i = 0; i< n; i++) 
    {
           cin >> a[i];
    }
     
    int minOP = 0;
    for(int i = 0; i < n ; i++)
    {
        if(a[i] != __gcd(a[i],a[i+1]))
        {
            a[i] = __gcd(a[i], a[i+1]);
        }

        if(a[i] == 1)
       minOP++;
    }

    cout << minOP << endl;

    return 0;
}