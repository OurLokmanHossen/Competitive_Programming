#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        unordered_map<int, int> last_pos;

        // প্রতিটি সংখ্যার সর্বশেষ position খুঁজে রাখি
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            last_pos[a[i]] = i;
        }

        int seg_count = 0; // কয়টা cool segment পারলাম
        int max_last = 0;  // এখন পর্যন্ত দেখা সংখ্যাগুলোর মধ্যে সর্বশেষ index

        for (int i = 0; i < n; i++) {
            max_last = max(max_last, last_pos[a[i]]);
            if (i == max_last) {
                seg_count++; // এখানে segment শেষ করা যাবে
            }
        }

        cout << seg_count << endl;
    }

    return 0;
}
