#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, p ; cin >> n >> k >> p;
        
        int max_pos = n * p;
        if( abs(k) > max_pos)
            cout << -1 << endl;
        else {
            int minOp = (abs(k) + p - 1) / p ;
            cout << minOp << endl;
        }  
    }
    return 0;
} 
