#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    int mini = INT_MAX, mx = INT_MIN;
    int t ; cin >> t;
    while (t--) {

        int a, b; cin >> a >> b;

        mini = min(mini, abs(a-b));

         
     
    }

    cout << mini << endl;
    
    return 0;
}
