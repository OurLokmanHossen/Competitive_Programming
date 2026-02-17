#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int end1 = c - a;
        int end2 = d - b;

        bool found = true;

        if (a >= 3 && b == 0) found = false;
        if (b >= 3 && a == 0) found = false;
        if (end1 >= 3 && end2 == 0) found = false;
        if (end2 >= 3 && end1 == 0) found = false;

        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
