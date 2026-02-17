#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        double a, b; cin >> a >> b;

        double r = 10 * 10;
        double x = 15 * 15;

        double res = a / r;
        double s = b / x;

         if(res < s)  cout << "Small" << endl;
        else if(res == s) cout << "Equal" << endl;
        else cout << "Large" << endl; 

       
        
    }
    
    return 0;
}
