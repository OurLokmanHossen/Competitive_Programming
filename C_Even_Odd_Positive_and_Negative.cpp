#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    // int n; cin >> n;

    // int eCnt = 0, oCnt = 0 , pCnt = 0, nCnt = 0;

    // int ar[n];

    // for(int i = 0; i < n; i++)
    // {
    //     cin >> ar[i];
    // }

    // for(int i = 0 ; i< n; i++)
    // {
    //     if (ar[i] % 2 == 0)
    //     {
    //         eCnt++;
    //     } 
    //     else {
    //         oCnt++;
    //     }
    //     if(ar[i]>0)
    //     {
    //         pCnt++;
    //     }
    //     else if(ar[i]<0){ // zero is neither positive and nor negetive
    //         nCnt++;
    //     }

    // }

    // cout << "Even: "  << eCnt << endl;
    // cout << "Odd: "  << oCnt << endl;
    // cout << "Positive: "  << pCnt << endl;
    // cout << "Negative: "  << nCnt << endl;

    int n ; cin >> n;
    int x, e = 0, o = 0, p = 0 , ne = 0;

    while(n--){

        cin >> x;
        if(x % 2 == 0) e++;
        else o++;
        if(x > 0) p++;
        else if(x<0) ne++;

    }

    cout << "Even: " << e << "\nOdd: " << o << "\nPositive: " << p << "\nNegative: " << ne << endl;
    

    return 0;
}