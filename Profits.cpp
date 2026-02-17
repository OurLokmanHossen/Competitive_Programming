#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;

        int s = 0, cnt = 0;

        for(int i = 1; i<=n; i++)
        {
            if(i >= x)
            {
              s += i;
              cnt++;
            } 
        }

        cout << s - (cnt * x) << endl;
        
    }
    
    return 0;
}
