#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        // Gellyfish tries to kill Flower's knight first
        // Needs d attacks => takes (2*d - 1) moves
        // In the meantime, Flower's knight hits (d - 1) times to Gellyfish

        if (a <= d - 1) {
            cout << "Flower" << endl;
        } else {
            cout << "Gellyfish" << endl;
        }
    }

    return 0;
}
