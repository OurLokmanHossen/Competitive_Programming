#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;

        // Step 1: Count initial number of '1's
        int countOnes = 0;
        for (char c : S) {
            if (c == '1') {
                countOnes++;
            }
        }

        // Step 2: Spread '1's from left to right
        for (int i = 0; i < N - 1 && K > 0; i++) {
            // If current character is '0' and the next character is '1'
            if (S[i] == '0' && S[i + 1] == '1') {
                S[i] = '1';  // Change '0' to '1'
                countOnes++;  // Increase count of '1's
                K--;  // Use one operation
            }
        }

        // Step 3: If there are remaining operations, apply them from left to right
        for (int i = 0; i < N - 1 && K > 0; i++) {
            if (S[i] == '0') {  // Convert more '0's if possible
                S[i] = '1';
                countOnes++;
                K--;
            }
        }

        cout << countOnes << "\n";
    }

    return 0;
}