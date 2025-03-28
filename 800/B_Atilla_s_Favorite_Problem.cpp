#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
       
    int t ; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        char maxChar = 'a';
        for(int i= 0 ; i<n ; i++ )
        {  
            maxChar = max(maxChar, s[i]);
        }
        cout <<( maxChar - 'a' + 1) << endl; //need ascii value to get the number of the character.
    }
    return 0;
}