#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t; cin >> t;

    while(t--)
    {
        int a , b , c; cin >> a >> b >> c;

        int ansA = max(0, max(b,c)-a+1);
        int ansB = max(0, max(a,c)-b+1);
        int ansC = max(0, max(a,b)-c+1);

        cout << ansA << " " << ansB << " " << ansC << endl;
    }

    return 0;
}