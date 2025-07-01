#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s; cin >> s;

    string rev = s;

    reverse(rev.begin(),rev.end());

    int n = s.size();

    if(s != rev) cout << n << endl;

   else
   {

    bool all_same = true;

    for(int i = 0; i< n-1; i++)
    {
        if( s[i] != s[i+1])
        {
            all_same = false;
        }
    }

    if(!all_same)
    {
        cout << n-1 << endl;
    }

    else cout << n << endl;

   } 

    return 0;
}