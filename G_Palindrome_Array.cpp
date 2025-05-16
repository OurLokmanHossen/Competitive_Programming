#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n;
   
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

   vector<int> ans = v; // for copying the v vector into ans
   reverse(ans.begin(),ans.end());

    if(ans == v) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

// bool isPalimdrome = true;
    // for(int i = 0; i<n/2 ; i++)
    // {
    //   if(a[i] != a[n-1-i])
    //   {
    //    isPalimdrome = false;
    //    break;
    //   }
    // }

    // if(isPalimdrome) cout << "YES" << endl;
    // else cout << "NO" << endl;