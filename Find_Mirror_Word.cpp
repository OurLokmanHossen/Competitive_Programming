#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s; cin >> s;

    string rev = s;

    reverse(s.begin(),s.end());

    if(s == rev) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}