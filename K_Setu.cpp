#include <iostream>
using namespace std;

int main() {
    int T, N, x, cas = 1;
    string s;
    cin >> T;

    while (T--) {
        cin >> N;
        int sum = 0;
        cout << "Case " << cas++ << ":\n";

        while (N--) {
            cin >> s;
            if (s == "donate") 
            {
                cin >> x, sum += x;
            }
            else cout << sum << "\n";
        }
    }
}
