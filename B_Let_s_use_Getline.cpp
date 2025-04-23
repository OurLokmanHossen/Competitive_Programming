#include <bits/stdc++.h>
using namespace std;

int main() {
   
    string s;
    getline(cin,s);

    // solution =1

    // for(int i = 0 ; i < s.size(); i++)
    // {
    //     if(s[i] == '\\')
    //     break;
    //     else
    //     {
    //      cout << s[i];
    //     }
    // }

    // solution 2

    // for( char c : s){
    //     if(c=='\\') break;
    //     {
    //         cout << c;
    //     }
    // }

    //most optimized shortest solution

    cout << s.substr(0, s.find("\\"));   
    return 0;
}

     