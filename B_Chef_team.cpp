#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int n ; cin >> n;

        int eCnt = 0, oCnt = 0;

    for(int i= 1; i<=n; i++)
    {
       if(n % i == 0)
       {
        if(i % 2 == 0)
       {
         eCnt++;
       }
       else oCnt++;
       }
    }

    if(eCnt == oCnt) cout << 1 << endl;
    else cout << 0 << endl;

       
    }

    return 0;
}