#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        string s; cin >> s;

        int cnt = 0;

        bool hard = false;

        for(char ch : s)
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                cnt = 0;
            }

            else cnt++;

             
            if(cnt >= 4)
            { 
             hard = true;
             break;
            }
        }

      

        if(hard) cout << "NO" << endl;
        else cout << "YES" << endl;
       
    }

    return 0;
}