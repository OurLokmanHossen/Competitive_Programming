#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    int caseNO = 1;
    while(t--)
    {
    
        cout << "Case " << caseNO << ": ";
        caseNO++;
        long long n; cin >>n;

    long long a[n];

    long long sum = 0;

    for(int i= 0; i<n; i++)
    {
        cin >> a[i];

        if(a[i]>0)
        {
            sum += a[i];
        }
    }
  cout << sum << endl;
    }



    return 0;
}