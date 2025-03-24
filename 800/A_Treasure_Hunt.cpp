#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {  
        int x, y, a;
        cin >> x >> y >> a; 

        a = a % (x + y);

        
        if (a < x) {
            cout << "NO" << endl;  
        }
        else {
            cout << "YES" << endl;  
        }
    }

    return 0;
}
