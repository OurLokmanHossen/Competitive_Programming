#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;

        int num = stoi(s);

        int x = sqrt(num);

        if(x * x == num)
        {
            cout << 0 << " " << x << endl;
        }

        else cout << -1 << endl;

    }

    return 0;
}