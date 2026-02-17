#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int a, b; 
        cin >> a >> b;

        int total = a * b;

        int h = total / 60;
        int s = total % 60;

        cout << h << " " << s << endl;
        
    }
    
    return 0;
}
