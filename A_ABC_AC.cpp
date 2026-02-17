#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();

    string s; cin >> s;

     s.erase((s.size()) / 2, 1); //(position, length)

     cout << s << endl;

    return 0;
}
