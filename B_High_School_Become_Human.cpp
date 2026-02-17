#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
   ll x, y; cin >> x >> y;

   double XpowY = y * log((long double) x);
   double YpowX = x * log((long double) y);

    if(XpowY > YpowX) cout << ">" << endl;
    else if(XpowY < YpowX) cout << "<" << endl;
    else cout << "=" << endl;
    
    return 0;
}
