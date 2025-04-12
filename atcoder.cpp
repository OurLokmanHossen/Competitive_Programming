#include<bits/stdc++.h>
using namespace std;

 int main(){
   
   int n;
   cin >> n;

   bool login = false;
   int authentication  =0 ;
   
   for(int i =0 ; i < n ; i++){
    string s;
    cin >> s;

    if( s == "login")
    {
        login = true;
    }
    else if( s == "logout")
    {
        login = false;
    }

    else if( s == "private" && !login){
        authentication++;
    }
   }
   cout << authentication << endl;

 }