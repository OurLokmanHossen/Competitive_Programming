#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        int a[n];

        // for(int i = 0 ; i<n; i++) cin >> a[i];

        if(n == 1) cout << -1 << endl;

        else if(n % 2 == 0)
        {
            for(int i = 0; i<n/2; i++)
            {
               cout << 2 << " " << -2 << " ";
            }
            cout << endl;
        }

        else {

            int x = n -3 ;
            x /= 2;

            for(int i= 0; i<x; i++)
            {
               cout << 2 << " " << -2 << " " ;
            }

            cout << 1 << " " << 2 << " " << -3 << endl;
        }
    }

    return 0;
}