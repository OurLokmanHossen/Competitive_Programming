#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

   bool isMagic = true;

//    if(s[0] == '4') 
//    isMagic = false;


   for (int i = 0; i<s.size(); i++)
   {
     if(s[i] != '1' && s[i] != '4')
     {
       isMagic = false;
    //    break;
     }

     if( s[i] == '4' && s[i+1]=='4' && s[i+2] == '4' )
     {
        isMagic = false;
        // break;
     }

     if(s[0]== '4') isMagic = false;
   }
     if(isMagic) cout << "YES" << endl;
     else cout << "NO" << endl;
  
    return 0;
}