#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        ll n, a, b;
    cin >> n >> a >> b;

    if (a <= b) {
       
        if ((n % 2) == (b % 2)) 
        {
            cout << "YES\n";
        } else 
        {
            cout << "NO\n";
        }
    } 
    else {
        
        if ((n % 2) == (a % 2) && (n % 2) == (b % 2)) 
        {
            cout << "YES\n";
        } else 
        {
            cout << "NO\n";
        }
    }
        
    }
    
    return 0;
}
