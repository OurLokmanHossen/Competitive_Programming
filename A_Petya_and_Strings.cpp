#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1 , s2; cin >> s1 >> s2;

    //upper case to lower case using for loop

    // for(int  i = 0; i< s1.length(); i++)
    // {
    //     s1[i]  = tolower(s1[i]);
    //     s2[i]  = tolower(s2[i]);
    // }

    // upper cast to lower case using for each loop

    for(char &c1 : s1){
        c1 = tolower(c1);
    }

    for(char &c2 : s2){
        c2 = tolower(c2);
    }
    
    if(s1 == s2)
    cout << 0 << endl;
    else if(s1 > s2)
    cout << 1 << endl;
    else if( s1 < s2)
    cout << -1 << endl;

    return 0;
}