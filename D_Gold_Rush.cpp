#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        bool found = false;

        while (true) {
            if (n == m) {       // If current pile equals target → YES
                found = true;
                break;
            }
            if (n < m) {        // If pile smaller than target → NO
                found = false;
                break;
            }
            if (n % 3 != 0) {   // Cannot split if not divisible by 3 → NO
                found = false;
                break;
            }

            // Take bigger pile in split: 2*(n/3)
            n = 2 * (n / 3);
        }

        if (found) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
