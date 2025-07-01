#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            freq[x]++;
        }

        if (freq.size() == 1) {
            cout << "Yes\n";  // সব একই
        } else if (freq.size() >= 3) {
            cout << "No\n";   // ৩টা বা তার বেশি আলাদা সংখ্যা
        } else {
            // দুইটা ভিন্ন সংখ্যা আছে
            auto it = freq.begin();
            int cnt1 = it->second;
            it++;
            int cnt2 = it->second;

            if (abs(cnt1 - cnt2) <= 1) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}
