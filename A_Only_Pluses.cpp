#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];

        for(int i = 0; i<5; i++)
        {
            sort(v.begin(),v.end());
            v[0]++;
        }
       

        cout << v[0] * v[1] * v[2] << endl;

        
    }
    
    return 0;
}
