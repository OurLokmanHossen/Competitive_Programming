#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;  

    while (t--) {   
        long long n, k;
        cin >> n >> k;  

        int ans = 0;

        if (k == 1) {
            cout << n << '\n'; // If k = 1, we subtract 1 each time
        }

        while (n > 0) {
            ans += n % k;  // Add remainder
            n /= k;        // Reduce n 
        }

        cout << ans << '\n'; 
    }

    return 0;
}
