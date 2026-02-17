#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int n; cin >> n;

    double p = 0;

    for(int i = 1; i<= n; i++)
    {
        p += 1.0/i;
    }

    cout << fixed << setprecision(12) << p << endl;


    
    return 0;
}
