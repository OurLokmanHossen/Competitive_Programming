#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

void solve() {

    int n; cin >> n;
    vector<int>  v(n);

    for(int i = 0; i<n; i++) cin >> v[i];

   
        if(n % 2 == 1 && (n % 3 == 0))  
        {
            cout << v[n/2] << endl; // mid = n/2(index)
            
        }
        else if(n % 2 == 0 && n % 3 == 0)
        {
           cout << v.front() << " " << v.back() << endl;
           
        } 
        else 
        {
            cout << v.front() + v.back() << endl;    
           
        }
 
    
}

int main() {
    fastio();
    int t; 
    cin >> t;
    while (t--) solve();
}
