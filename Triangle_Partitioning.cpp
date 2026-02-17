#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    int testcase = 1;

    while(t--)
    {
        cout << "Case " << testcase++ << ": ";

        double ab, ac, bc , r; cin >> ab >> ac >> bc >> r;

        double ad = ab * sqrt(r / (r + 1));

        cout << fixed << setprecision(10) << ad << endl;

    }

    return 0;
}