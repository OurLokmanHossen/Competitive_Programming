#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n; cin >>n;
        int a[n];

        for(int i = 0; i<n ;i++) cin >> a[i];

        
       int neg = 0, pos = 0, ans = 0;

        for(int i = 0 ; i<n ; i++)
        {
           if(a[i]<0) neg++;
           else pos++;
        }

        while(neg>pos)
        {
            neg--;
            pos++;
            ans++;
        }

        if(neg % 2 == 1) // if the neg is odd then operation increase by 1
        {
            ans++;
        }

        cout << ans << endl;


    }
    

    return 0;
}