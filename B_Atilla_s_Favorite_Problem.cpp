#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
       
   int t; cin >> t;
   while(t--)
   {
    int n; cin >> n;
    string s; cin >> s;

   char maxChar = 'a';
    for(int i = 0; i<s.size(); i++)
    {
      maxChar = max(maxChar,s[i]);
    }

    cout << maxChar - 'a' + 1 << endl; // z= 25 + 1 = 26 (need to know 26 char)

   }\
    return 0;
}