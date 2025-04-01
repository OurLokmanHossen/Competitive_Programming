#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 1; i < s.size(); i++)
            if (s[i] == s[i - 1]) {
                cout << "1\n";
                flag = true;
                break;
            }
        if (!flag) cout << s.size() << '\n';
    }
}
