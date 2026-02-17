#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

        int n; cin >> n;

        int cnt = 0;

        for(int i = 1; i * i <= n; i++)
        {
            if( n % i == 0)
            {
                if( i * i == n) cnt++;
                else cnt += 2;
            }
           
        }

        cout << cnt << endl;
        
    }
    
    return 0;
}
