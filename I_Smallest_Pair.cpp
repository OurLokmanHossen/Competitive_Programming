#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin >> t;
    while(t--)
    {
       ll n; cin >> n;
       ll a[n];

    for(ll i = 0; i< n; i++) cin >> a[i];

    ll minSum = LLONG_MAX;

     for(ll i = 0; i< n; i++)
     {
        for(ll j = i+1; j<n; j++)
        {
            minSum = min(a[i] + a[j] + j - i, minSum);
        }
     }

     cout << minSum << endl;
    }

    return 0;
}
