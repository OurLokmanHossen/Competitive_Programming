#include <iostream>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    long long ans = 0;

    if (n % 2 == 0 && k % 2 == 1) { 
        k--;  
    } 
    
    else if (n % 2 == 1 && k % 2 == 1) { 
        n -= k;
        ans++;
        k--;  
    }
    ans +=  (n + k - 1)/ k; 
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
