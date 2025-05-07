#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int a[n];

    for(int i = 0;i<n; i++) cin >> a[i];

    int cntOdd = 0;

    for(int i = 0; i< n; i++)
    {
        if(a[i] % 2 != 0)
        {
            cntOdd++;
        }
    }

    if(cntOdd % 2 == 0)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;

    return 0;
}