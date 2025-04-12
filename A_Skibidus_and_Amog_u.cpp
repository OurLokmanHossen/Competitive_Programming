#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        string w;
        cin >> w;

        w = w.substr(0, w.size() - 2) + "i";

        // here 0 is starting index 

        cout << w << endl;
    }

    return 0;
}