#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int a[n];

    int mn = INT_MAX;

    for(int i = 0; i<n; i++) 
    {
        cin >> a[i];

        if(a[i]<mn)
        {
            mn = a[i];
        }
        
    }

    int cnt = 0;

    for(int i = 0; i<n; i++)
    {
      if(a[i] == mn) cnt++;
    }
    
    if(cnt % 2 != 0) cout << "Lucky" << endl;
    else cout << "Unlucky" << endl;

    return 0;
}