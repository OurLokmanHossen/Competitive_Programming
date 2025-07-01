#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k; cin  >> n >> k;
    int a[n];

    int freq[101] = {0};

    for(int i = 0; i<n;i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

   
    int maxFreq = 0;
    for(int i = 1; i<=100; i++)
    {
       if(freq[i]> maxFreq)
       {
        maxFreq = freq[i];
       }
    }

    cout << maxFreq << endl;

   

    return 0;
}