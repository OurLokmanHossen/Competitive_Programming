#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    int a[n];
    for(int i =0; i<n ; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);

    // int ans = INT_MAX;

    int ans = a[n-1];


    for(int i = 0; i<n ; i++)
    {
        ans = min(ans, abs(a[i]));

    }

    cout << abs(ans) << endl;

    return 0;
}
