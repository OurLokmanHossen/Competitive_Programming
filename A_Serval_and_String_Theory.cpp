#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());

        if (s < rev_s) {
            cout << "YES\n";
        } else if (k == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
