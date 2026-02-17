#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

  int t; cin >> t;
  while(t--){
    
    string s; cin >> s;
 
   string rev = s;

   reverse(rev.begin(), rev.end());

   int cnt = 0;

   if(s == rev) cnt++;

    cout << cnt << endl;

  }
    return 0;
}