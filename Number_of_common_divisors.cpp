#include <bits/stdc++.h>
using namespace std;
#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long

int main() {
    fastio();
    
    int t ; cin >> t;
    while (t--) {

         int a, b; cin >> a >> b;

    int n = __gcd(a,b);

    int cnt =0;

    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
           cnt++;
        if(i != n / i) 
        {
            cnt++;
        }
        } 
    }

    cout << cnt << "\n";
        
    }
    
    return 0;
}
