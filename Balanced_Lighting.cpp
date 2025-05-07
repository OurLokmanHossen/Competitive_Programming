#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        int a[n];

        for(int i = 0 ; i<n; i++) cin >> a[i];

        sort(a, a+n);

        int cnt1  = 0, cnt2= 0, cnt0 = 0;

        for(int i = 0; i <n; i++)
        {
            if(a[i] == 1) cnt1++;
            else if(a[i] == 2) cnt2++;
            else cnt0++;
        }




    }

    return 0;
}