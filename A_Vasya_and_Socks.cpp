#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m; cin >> n >>  m;

    int day = 0;

    while(n)
    {
        n--;
        day++;

        if(day % m == 0)
        {
            n++;
        }
    }

    cout << day << endl;

    return 0;
}