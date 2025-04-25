#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
       
        int mini = INT_MAX;
        int maxi = INT_MIN;

        int a[n];

        for(int i = 0; i< n; i++)
        {
            cin >> a[i];

            mini = min(a[i],mini);
            maxi = max(a[i],maxi);

        }

        cout << max(0, maxi - mini - 1) << endl;
    }

    return 0;
}