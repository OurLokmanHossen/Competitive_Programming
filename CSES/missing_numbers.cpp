#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n; cin >> n;

    long long a[n];

    long long totalSum =  n * (n+1) / 2;
   
    for(int i = 0; i<n;i++)
    {
       cin >> a[i];
    }

    long long sum = 0;
    for(int i = 0; i< n-1; i++)
    {
        sum +=a[i];
    }

    cout << totalSum-sum << endl;

    return 0;
}