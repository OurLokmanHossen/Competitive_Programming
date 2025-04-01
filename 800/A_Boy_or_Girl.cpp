#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;

    set<char> uni_char(s.begin(), s.end());

    if (uni_char.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
