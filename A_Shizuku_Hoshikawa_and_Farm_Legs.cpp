#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

    int n; cin >> n;

   int ans = 0;

    for(int chik = 0; chik<100; chik++)
    {
        for(int cow = 0 ; cow < 100; cow++)
        {
            if(chik * 4 + cow * 2 == n) ans++;
        }
     
    }

    cout << ans << endl;
        
    }
    
    return 0;
}
