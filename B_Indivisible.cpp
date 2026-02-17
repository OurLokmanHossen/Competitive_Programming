#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        if(n == 1) cout << 1 << endl;
        else if(n % 2 == 1) cout << -1 << endl;
        else{
        
            for(int i = 2; i<= n; i += 2)
            {
                cout << i << " " << (i-1) <<  " "; 
            } 

            cout << endl;
        }  
    }
    
    return 0;
}
