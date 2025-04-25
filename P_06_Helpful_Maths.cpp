#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s; cin >> s;

    string rev = s;

    reverse(rev.begin(),rev.end());

    cout << rev << endl;

    return 0;
}