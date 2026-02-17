#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    
    ll n; cin >> n;

    map<ll,int> freq;

    ll x; 
    int maxFreq = 0;

    for(ll i = 0; i<n ; i++)
    {
        cin >> x;
        freq[x]++;
        maxFreq = max(maxFreq, freq[x]);
    }

    cout << maxFreq << endl;

    return 0;
}