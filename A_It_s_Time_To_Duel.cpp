#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n ; cin >> n;

        int a[n];

        int s = 0;

        for(int i = 0 ; i < n; i++) 
        {
            cin >> a[i];

            s += a[i];
        }

        bool found = true;

        for(int i = 1 ; i<n ; i++)
        {
            if( a[i]== 0 && a[i-1]== 0)
            {
                found = false;
            }
        }

        if(s != n && found) cout << "NO" << endl;
        else cout << "YES" << endl;
    
    } 

    return 0;
}