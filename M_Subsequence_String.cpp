#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1 ; cin >> s1;
    string s2 = "hello";
   
    int j = 0;
    for(int i = 0; i< s1.size(); i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
        }
    }

    if(j == s2.size())
    cout << "YES" << endl;
    else
    cout << "NO" << endl;

    return 0;
}