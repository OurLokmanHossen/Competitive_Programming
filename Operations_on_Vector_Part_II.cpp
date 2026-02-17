#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        vector<int> v(n);

        for(int i = 0; i<n; i++) cin >> v[i];

        int mul = 1 , Psum = 1;

        for(int i = 0; i<n; i++)
        {
            Psum *= v[i] * mul;
        }

        cout << Psum << endl;

      
        
    }
    
    return 0;
}
