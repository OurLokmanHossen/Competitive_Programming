#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; cin >> t;

    long long caseNo =  1;

    while(t--)
    {
        cout << "Case " << caseNo << ": ";
        caseNo++;

        string s; cin >> s;

        bool found = true;

        int n = s.size();

        for(long long i = 0; i<n; i++)
        {
          if(s[i] != s[n-1-i])
          {
            found = false;
            break;
          }
        }

        if(found) cout << "Yes" << endl;
        else cout << "No" << endl;
    }




    return 0;
}