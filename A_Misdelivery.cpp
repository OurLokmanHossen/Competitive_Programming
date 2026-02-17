#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n; cin >> n;

    vector<string> s(n);

    for(int i = 0; i<n; i++)
    {
        cin >> s[i];
    }

    int x; cin >> x;
    string y; cin >> y;

    if(s[x-1] == y) cout << "Yes" << endl;
    else cout << "No" << endl;

    
    return 0;
}
