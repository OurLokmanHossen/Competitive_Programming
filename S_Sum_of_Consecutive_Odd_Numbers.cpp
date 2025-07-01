#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--)
    {
        long long x, y; cin >> x >> y;

        long long mi = min(x,y);
        long long ma = max(x,y);

        long long sum = 0;

        for(long long i = mi+1; i<ma; i=i+1)
        {
           if(i % 2 != 0)
           {
            sum += i;
           }
        }
     cout << sum << endl;


    }
    return 0;
}