#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
      string s; cin >> s;

      // if(s.find("010") != string::npos || s.find("101") != string::npos) 
      // {
      //   cout << "Good" << endl;
      // }
      // else cout << "Bad" << endl;

      bool found = false;

      for(int i = 0; i < s.size()-2; i++)
      {
        if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' || s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')
        found = true;
      }

      if(found) cout << "Good" << endl;
      else cout << "Bad" << endl;
      
    }

    return 0;
}