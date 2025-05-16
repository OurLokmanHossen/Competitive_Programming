#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;

        vector<int> a(n);

        for(int i = 0; i<n ; i++)
        {
            cin >> a[i];
        }

       int midianInd= (n-1)/ 2;

       int target = abs(a[0]);

       int lessCnt = 0;

       for(int i = 1; i<n ; i++)
       {
        if(abs(a[i]) < target)
        {
            lessCnt++;
        }
       }

       if(lessCnt == midianInd) 
       {
        cout << "YES" << endl;
       }

       else cout << "NO" << endl;

    }

    return 0;
}