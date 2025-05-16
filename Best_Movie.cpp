#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {

        int n ; cin >> n;
        
        int a,b;

        bool f = false;

        int mCost = INT_MAX;

        for(int i = 0 ; i<n ; i++)
        {
            cin >> a >> b;

            if(a >= 7)
            {
                f = true;
                mCost = min(mCost,b);
            }
            
        }

        if(f) cout << mCost << endl;
        else cout << -1 << endl;

    }




    return 0;
}