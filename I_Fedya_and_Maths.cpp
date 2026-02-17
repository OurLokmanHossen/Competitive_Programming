#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    ll n; cin >> n;

    ll s = 0, i = 0;

    while(i <= 4)
    {
        s += pow(i, n);
        i++;

    }

   

    cout << s % 5 << endl;
    
    return 0;
}
