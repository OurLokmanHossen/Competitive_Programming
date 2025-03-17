#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        int minOp = 0;

        while (n > 0) {
            if (n % 2 == 0) {  // If n is even
                if (k % 2 == 0) {
                    n -= k;  // Subtract k if k is even
                } else {
                    n -= (k - 1);  // Subtract k-1 if k is odd
                }
            } else {  // If n is odd
                n -= k;  // Subtract k since k is odd
            }

            minOp++;  // Increment operation count
        }

        cout << minOp << endl;  // Output the result for this test case
    }

    return 0;
}
