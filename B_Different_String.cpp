#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        // Step 1: Count the frequency of characters
        map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }

        // Step 2: Check if all characters are the same
        if (charCount.size() == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;

            // Step 3: Rearrange string to ensure it's different
            for (int i = 0; i < s.size() - 1; i++) {
                if (s[i] != s[i + 1]) {
                    swap(s[i], s[i + 1]);
                    break;
                }
            }

            // Step 4: Output the rearranged string
            cout << s << endl;
        }
    }

    return 0;
}
