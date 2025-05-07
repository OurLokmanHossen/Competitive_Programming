#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;

        int cnt1 = 0;

        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                cnt1++;
            }
        }

        cout << cnt1 << endl;
    }

    return 0;
}